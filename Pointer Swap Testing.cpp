#include <iostream>
using namespace std;

swap(int *yptr, int *xptr)
{
	int temp;
    temp = *xptr;
    *xptr = *yptr;
    *yptr = temp;
}

main()
{
	int x=10, y=20, *yptr, *xptr;
	yptr=&y;
	xptr=&x;
	swap(yptr, xptr);
	cout<<"x="<<x<<"\ny="<<y;

}

