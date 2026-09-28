#include <iostream>
using namespace std;

int main ()
{
	double num1, num2, result = 0;
	char op;
	bool valid=true;
	
	cout<<"Enter first number: ";
	cin>>num1;
	
	cout<<"Enter second number: ";
	cin>>num2;
	
	cout<<"Enter any operator from DMAS: ";
	cin>>op;
	
	switch(op)
	{
		case '+':
			result = num1+num2;
			break;
		
		case '-':
			result = num1-num2;
			break;
		
		case '*':
			result = num1*num2;
			break;
		
		case '/':
			if(num2!=0)
			{
				result = num1/num2;
			}
			else
			{
				cout<<"Dividing by Zero is Illegal.\n";
			}
			break;
		
		default:
			cout<<"Invalid Operator.\n";
			valid=false;
	}
	if(valid)
	{
		cout<<"Result:"<<result<<endl;
	}
	return 0;
}
