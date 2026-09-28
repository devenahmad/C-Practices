#include <iostream>

using namespace std;

main(){
	int st, en;
	cin>>st;
	cin>>en;
	int temp = st;
	
	cout<<"LIST OF EVEN NUMBERS\n";
	while(temp <= en){
		if (temp%2 == 0)
			cout<<temp<<endl;
		temp = temp + 1;	
	}
	
	temp = st;
	cout<<"LIST OF ODD NUMBERS\n";
	while(temp <= en){
		if (temp%2 == 1)
			cout<<temp<<endl;
		temp = temp + 1;	
	}
	
		
	}
		
	
