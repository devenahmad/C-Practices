#include <iostream>
using namespace std;

int evensum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        int digit = number % 10;
        if (digit % 2 == 0)
        {
            sum += digit;
        }
        number /= 10;
    }
    return sum;
}

int main()
{
    int vuid = 230407520;
    int temp = vuid; 
    cout << "Student ID: BC" << vuid << endl;
    cout << "Digital part of the student id is: " << vuid << endl;
    cout << "Even digits: ";
    while (vuid > 0)
    {
        int digit = vuid % 10;
        if (digit % 2 == 0 && digit != 0)
        {
            cout << digit << " ";
        }
        vuid /= 10;
    }
    cout << endl;
    vuid = temp; 
    cout << "Sum of Even Digits = " << evensum(vuid);
    return 0;
}

