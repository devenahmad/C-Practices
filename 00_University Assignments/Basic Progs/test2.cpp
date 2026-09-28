#include <iostream>

using namespace std;

main(){
	char choice;
	cin>>choice;
	if(choice == 'c'){
		int radius;
		cin>>radius;
		float area = 3.14 * radius * radius;
		float cir = 2 * 3.14 * radius;
		cout<<"Area = "<<area<<endl;
		cout<<"Cir = "<<cir<<endl;
	}
	else if(choice == 's'){
		int side;
		cin>>side;
		float area = side * side;
		float per = 4 * side;
		cout<<"Area = "<<area<<endl;
		cout<<"Per = "<<per<<endl;
	}
		
	}
		
	
