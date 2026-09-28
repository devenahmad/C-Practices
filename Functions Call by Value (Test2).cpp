#include <iostream>
using namespace std;

double circlearea (double radius)
{
		return (3.1415926*radius*radius);
}

main()
{
		double outerrad, innerrad, ringarea;
		cout<<"Enter the outer radius value: ";
		cin>>outerrad;
		cout<<"Enter the inner radius value: ";
		cin>>innerrad;
		ringarea=circlearea(outerrad)-circlearea(innerrad);
		if (outerrad>innerrad)
		{
			cout<<"Area of ring having inner radius "<<innerrad<<" and the outer rad "<<outerrad<<" is "<<ringarea;	
		}
		else
		{
			cout<<"Outer Circle must be larger than Inner!";
		}
}
