#include <iostream>
using namespace std;

double raisetopov (double x, int power)
{
		double result=1.0;
		int i;
		for(i=1; i<=power; i++)
		{
			result*=x;
		}
		return (result);
}

main()
{
		double x;
		int power;
		cout<<"Enter a Number: ";
		cin>>x;
		cout<<"Enter the integer power that you want this number raised to: ";
		cin>>power;
		cout<<x<<" raise to power "<<power<<" is equal to "<<raisetopov(x,power);
}

