#include <iostream>
using namespace std;
main()
{
		int number, fact;
		fact=1;
		cout<<"Enter the number of Factorial = ";
		cin>>number;
		while (number>=1)
		{
			fact=fact*number;
			number=number-1;
		}
		cout<<"Factorial is: "<<fact;
}

