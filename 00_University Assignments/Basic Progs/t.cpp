#include <iostream>

using namespace std;

main(){
	int limit;
	cin>>limit;
	for (int t=1; t<=limit; t=t+1){
		cout<<t<<"\t"<<t*t<<"\t"<<t*t*t<<endl;
	}
}
