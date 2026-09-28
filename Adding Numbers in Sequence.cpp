#include <iostream>
using namespace std;
main()
{
		int sum, number;
		sum=0;
		number=1;
		while (number<=1000)
		{
			sum=sum+number;
			number=number+1;
		}
		cout<<"sum = "<<sum<<endl;
}

