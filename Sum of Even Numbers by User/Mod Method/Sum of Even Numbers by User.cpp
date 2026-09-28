#include <iostream>
using namespace std;
main()
{
		int sum, number, UpperLimit;
		sum=0;
		number=1;
		cout<<"Enter the UpperLimit: ";
		cin>>UpperLimit;
		while (number <= UpperLimit)
		{
			if (number % 2 == 0)
			{
				sum=sum+number;				
			}
		number=number+1;
		}
		cout<<"The sum of all even integers is = "<<sum<<endl;
}
