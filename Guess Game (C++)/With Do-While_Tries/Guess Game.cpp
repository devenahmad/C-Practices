#include <iostream>
using namespace std;
int main()
{
    char c;
    int tries=1;
    cout << "Welcome to the Guessing Game!\n" << endl;
	cout << "You have 5 attempts to guess the secret character.\n__________________________________________________\n" << endl;
	do
    {
		cout << "Enter your guess: ";
	    cin >> c;
	    if (c=='z')
	    {
	    	cout<<"Congratulations! You guessed the correct answer\n";
	    	tries=6;
		}
		else
		{
			cout<<"Try Again...\n\n";
			tries=tries+1;
		}
	}
	while (tries<=5);
}
