#include <iostream>
using namespace std;
main()
{
    char c;
    int tries, maxtries;
    tries=1;
    maxtries=5;
    cout << "Welcome to the Guessing Game!\n" << endl;
	cout << "You have 5 attempts to guess the secret character.\n__________________________________________________\n" << endl;
	while ((tries<=maxtries) && (c!='z'))
	{
		cout<<"Guess the character: ";
		cin>>c;
		if (c=='z')
		{
			cout<<"Congratulations! You guessed the secret character..."<<endl;
		}
		else
		{
			cout<<"Wrong Guess! Try Again..."<<endl;
			tries=tries+1;
		}
	}
	if (tries>maxtries)
	{
		cout<<"Your Loss the Game!";
	}
}
