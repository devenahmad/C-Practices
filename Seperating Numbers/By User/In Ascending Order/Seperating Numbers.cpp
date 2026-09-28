#include <iostream>
using namespace std;
main()
{
		int number;
		int digit;
		cout<<"Please enter 4 digits integer = ";
		cin>>number;
		digit=number/1000;
		cout<<"\nThe Left Most Digit is: "<<digit<<"\n\n";
		number=number%1000;
		digit=number/100;
		cout<<"The Left Most Digit is: "<<digit<<"\n\n";
		number=number%100;
		digit=number/10;
		cout<<"The Left Most Digit is: "<<digit<<"\n\n";
		number=number%10;
		cout<<"The Left Most Digit is: "<<number<<"\n\n";
}

