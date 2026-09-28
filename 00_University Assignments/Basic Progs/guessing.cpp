#include <iostream>

using namespace std;

main(){
	int secret = 44;
	int guess, attempt=1, flag=0;
	do{
		cin>>guess;
		if (guess==secret){
			cout<<"YOU WIN";
			flag = 1;
		}
		attempt = attempt + 1;
	}while(attempt <= 5 && flag == 0);
	
	if (flag==0)
		cout<<"YOU LOSE";
}

