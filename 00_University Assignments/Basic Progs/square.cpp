#include <iostream>

using namespace std;

float area(int radius){
	return 3.14*radius*radius;
}

main(){
	cout<<"Area of ring = "<<area(5)-area(3)<<endl;
}
