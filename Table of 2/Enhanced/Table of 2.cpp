#include <iostream>
using namespace std;
main()
{
		int number, maxmultiplier, counter;
		maxmultiplier=10;
		cout<<"Enter the number of which you want Table: ";
		cin>>number;
		for (counter=1; counter<=maxmultiplier; counter=counter+1)
		{
			cout<<number<<" x "<<counter<<" = "<<number*counter<<"\n";
		}
}
