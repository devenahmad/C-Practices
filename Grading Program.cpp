#include <iostream>
using namespace std;
main()
{
	char grade;
	cout<<"Enter your grade: ";
	cin>>grade;
	switch (grade)
	{
		case 'A':
		case 'a':
			cout<<"Excellent";
			break;
		case 'B':
		case 'b':
			cout<<"Very Good";
			break;
		case 'C':
		case 'c':
			cout<<"Good";
			break;
		case 'D':
		case 'd':
			cout<<"Poor";
			break;
		case 'F':
		case 'f':
			cout<<"Fail";
			break;
		default:
			cout<<"Please enter a grade from 'A' to 'D' or 'F'";
		
	}
}
