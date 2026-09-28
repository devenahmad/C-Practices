#include <iostream>

using namespace std;

main(){
	int limit, fact=1;
	cin>>limit;
	for(int x=limit; x>=1; x=x-1)
		fact = fact * x;
	cout<<fact;	


	
}

