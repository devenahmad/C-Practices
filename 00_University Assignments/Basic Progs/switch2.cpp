#include <iostream>

using namespace std;

main(){
	char type;
feeka:
	cin>>type;
	switch(type){
		case 'a':
		case 'A':
			cout<<"Adveture film\n";
			break;
		case 'h':
			cout<<"Horron film\n";
			break;
		case 'i':
			cout<<"Indian film\n";
			break;
		default:
			cout<<"---- film\n";
	}
	goto feeka;	
	
}

