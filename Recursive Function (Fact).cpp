#include <iostream>
using namespace std;

long fact (long n)
{
		if (n==0 || n==1)
		{
			return (n);
		}
		else
		{
			return (n*fact(n-1));
		}
}

main()
{
		long n, result;
		cout<<"Enter number for factorial: ";
		cin>>n;
		result=fact(n);
		cout<<result;
}

