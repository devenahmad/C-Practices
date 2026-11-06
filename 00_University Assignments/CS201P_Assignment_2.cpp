#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;
class Player
{
	private:
	    string playerName;
	    int totalScore;
	    int ballsPlayed;
	    
	public:
	    void setName (string name) {playerName = name;}
	    string getName () {return playerName;}
	    void setScore (int score) {totalScore += score;}
	    int getScore () {return totalScore;}
		void setBalls (int balls) {ballsPlayed = balls;}
		int getBalls () {return ballsPlayed;}
		Player() {totalScore = 0, ballsPlayed = 0;}
};

int generateRandomScore()
{
    int score;

    // For random score
    score = -1 + rand() % (6 - (-1) + 1);

    // Skipping 5
    while (score == 5)
	{
        score = -1 + rand() % (6 - (-1) + 1);
	}
    return score;
}

int main()
{
	int highScore = 0;
    string ManOfTheMatch;
    
	// Seeding random number
	srand(time(0));
	
    string playerNames[] = {"Babar Azam", "Naseem Shah", "Agha Salman",
		"Mohammad Amir", "Shaheen Afridi", "Shadab Khan", "Imad Wasim",
		"Fakhar Zaman", "Haris Rauf", "Mohammad Rizwan", "Iftikhar Ahmed"};

    Player players[11];
	
    // Initializing players
    for (int i = 0; i < 11; ++i)
	{
        players[i].setName(playerNames[i]);
	}
	
    // Turn to players
    for (int i = 0; i < 11; i++)
	{
		cout << (i + 1) << ". " << players[i].getName() << endl;
        cout << "Scores per Ball: ";

        // Calculating Scores per ball
        int score;
        while (true)
		{
            score = generateRandomScore();
            if (score == -1)
			{
                cout << "OUT" << endl;
                break;
            }
			else
			{
                players[i].setScore(score);
                players[i].setBalls(players[i].getBalls() + 1);
                cout << score << ",";
                usleep(500000);			// Delay
            }
    	}
		cout << "Total Score: " << players[i].getScore() << "\t Balls Played: " << players[i].getBalls() << endl << endl;
	}

    // Display Match Summary
    cout << "<<<<<< Match Summary >>>>>>" << endl;
    cout << "Player Name\t\tScore\tBalls Played" << endl;
    
    for (int i = 0; i < 11; ++i)
	{
        cout << players[i].getName() << "\t\t" << players[i].getScore() << "\t" << players[i].getBalls() << endl;
		if (players[i].getScore() > highScore)
		{
	        highScore = players[i].getScore();
	        ManOfTheMatch = players[i].getName();
	    }  
    }
    
    // Display Man of the Match
    cout << endl << "Man of the Match: " << ManOfTheMatch << endl;
}
