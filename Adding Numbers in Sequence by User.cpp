#include <iostream>
using namespace std;
main()
{
		int sum, number, UpperLimit;
		sum=0;
		number=1;
		cout<<"Enter the Upper Limit: ";
		cin>>UpperLimit;
		while (number<=UpperLimit)
		{
			sum=sum+number;
			number=number+1;
		}
		cout<<"sum = "<<sum<<endl;
}

