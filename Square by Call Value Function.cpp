#include <iostream>
using namespace std;

int square(int number)
{
	int result = 0;
	result = number*number;
	return result;
}

main()
{
	int result = 0;
	int number = 0;
	cout << "Please enter the number to calculate the square: ";
	cin>> number;
	result=square(number);
	cout<<"The square of "<<number<<" is "<<result;
}
