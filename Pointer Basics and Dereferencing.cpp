#include <iostream>
using namespace std;
main()
{
	int x=10;
	int *yptr;
	yptr=&x;
	cout << "Address stored in yptr: " << yptr << endl;
    cout << "Value pointed to by yptr: " << *yptr << endl;

	(*yptr)++;
	cout<<"\n"<<*yptr;
}

