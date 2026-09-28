#include <iostream>
using namespace std;
int main()
{
    int secretNumber = 44;
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Guessing Game!\n" << endl;
    cout << "You have 5 attempts to guess the secret number.\n________________________________________________\n" << endl;
    
    while (attempts < 5) {
        cout << "Attempt " << attempts + 1;
		cout << ": Enter your guess: ";
        cin >> guess;
        
        if (guess == secretNumber) {
            cout << "Congrats! You won.\n\n";
            break;
            
        } else if (guess!=secretNumber){
        	
            cout << "Wrong Guess, Try Again.\n\n";
        }
        else{
        	cout<<"\n";
		}
        
        attempts++;
    }
    
    if (guess!=44)
    {
    	cout<<"You Lost the Game...";
	}
    
}

