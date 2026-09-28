#include <iostream>

using namespace std;
void x(){
	cout<<"bye"<<endl;
}
void fun(){
	cout<<"imran"<<endl;
	x();
	cout<<"khan"<<endl;
}
int multiply(int x, int y){
	int res = x * y;
	return res;
}
main(){
	cout<<multiply(2,3)<<" is great "<<multiply(3,4)<<endl;
}




