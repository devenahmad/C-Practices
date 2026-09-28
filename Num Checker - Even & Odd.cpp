#include <iostream>
using namespace std;

int main()
{
	long long int num=0;
	
	do
	{
		cout<<"Enter any number (0 to exit): ";
		cin>>num;
		
		if(num==0)
		{
			cout<<"Exiting Program..."<<endl;
			break;
		}
		
		if(num%2==0)
		{
			cout<<endl<<num<<" is even"<<endl<<endl;
		}
		else
		{
			cout<<endl<<num<<" is odd"<<endl<<endl;
		}
	}
	
	while (true);
	
	return 0;
}
