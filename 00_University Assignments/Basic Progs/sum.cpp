#include <iostream>

using namespace std;

main(){
	int limit, sum=0;
	cin>>limit;
	for(int x=1; x<=limit; x=x+1)
		sum = sum + x;
	cout<<sum;
	
}

