#include <iostream>
using namespace std;
main()
{
		int number;
		int digit;
		cout<<"Please enter 4 digits integer = ";
		cin>>number;
		digit=number%10;
		cout<<"\nThe Right Most Digit is: "<<digit<<"\n\n";
		number=number/10;
		digit=number%10;
		cout<<"The Right Most Digit is: "<<digit<<"\n\n";
		number=number/10;
		digit=number%10;
		cout<<"The Right Most Digit is: "<<digit<<"\n\n";
		number=number/10;
		digit=number%10;
		cout<<"The Right Most Digit is: "<<digit<<"\n\n";
}

