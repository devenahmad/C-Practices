#include <iostream>
using namespace std;

int main ()
{
	int a,b,c, largest = 0;
	
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"Enter Third Number: ";
	cin>>c;
	cout<<endl;
	
	largest = (a > b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
	
	cout<<"Largest Number is: "<<largest<<endl;
	return 0;
}
