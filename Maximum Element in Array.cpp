#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum value is: " << max;
}

