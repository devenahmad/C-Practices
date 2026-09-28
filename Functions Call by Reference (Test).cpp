#include <iostream>
using namespace std;

double square (double *x)
{
		*x = *x * *x;
}

main()
{
		double x=123.456;
		square (&x);
		cout<<"Square of number is "<<x;
}

