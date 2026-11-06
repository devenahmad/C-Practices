// CS609_Assignment1_TextFileAnalyzer

#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main()
{
    char filePath[MAX_PATH];

    cout << "Enter the path of the text file: ";
    cin.getline(filePath, MAX_PATH);

    size_t len = strlen(filePath);
    if (len >= 2 && filePath[0] == '"' && filePath[len - 1] == '"')
    {
        filePath[len - 1] = '\0';
        memmove(filePath, filePath + 1, len - 1);
    }

    // read-only mode
    HANDLE hFile = CreateFileA(
        filePath,
        GENERIC_READ,
        FILE_SHARE_READ,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );

    if (hFile == INVALID_HANDLE_VALUE)
    {
        cout << "Error: Unable to open the specified file. (Error code: "
             << GetLastError() << ")" << endl;
        return 1;
    }

    const DWORD BUFFER_SIZE = 4096;
    char buffer[BUFFER_SIZE];
    DWORD bytesRead = 0;
    unsigned long long totalBytes = 0;

    cout << "\n----- File Contents -----\n";

    while (true)
    {
        if (!ReadFile(hFile, buffer, BUFFER_SIZE, &bytesRead, NULL))
        {
            cout << "\nError: Failed to read the file. (Error code: "
                 << GetLastError() << ")" << endl;
            break;
        }

        if (bytesRead == 0)
        {
            break;
        }

        cout.write(buffer, bytesRead);
        totalBytes += bytesRead;
    }

    cout << "\n\nTotal bytes read: " << totalBytes << endl;
    CloseHandle(hFile);

    return 0;
}
