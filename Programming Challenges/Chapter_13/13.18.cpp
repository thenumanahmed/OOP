#include <iostream>
#include <time.h>

using namespace std;

class Dice
{
	int noOfSides;
	int score;

public:
	Dice(int n = 6)
	{
		srand(time(0)); // seed for random Numbers
		noOfSides = n;
		score = 0;
	}
	void roll()
	{
		score += (rand() % 6 + 1);
	}
	int getScore()
	{
		return score;
	}
};

int main()
{

	Dice computer;
	Dice player;

	char choice; // for yes / no

	while (true)
	{
		cout << "Do you want to roll the dice: ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			player.roll();
			computer.roll();
		}
		else if (choice == 'n' || choice == 'N')
		{
			break;
		}
	}

	cout << "Your score is: " << player.getScore() << endl;
	cout << "Computer's score is: " << computer.getScore() << endl;

	if (player.getScore() > computer.getScore())
	{
		if (player.getScore() <= 21)
		{
			cout << "You win the game." << endl;
		}
		else
			cout << "You lose the game." << endl;
	}
	else if (computer.getScore() > player.getScore())
	{
		if (computer.getScore() <= 21)
		{
			cout << "You lose the game." << endl;
		}
		else if (player.getScore() <= 21)
		{
			cout << "You win the game." << endl;
		}
		else
			cout << "No one is the winner. " << endl;
	}
	else // when both have equal scores
	{
		if (computer.getScore() <= 21) // check for player or computer(both same)
		{
			cout << "Tie!" << endl;
		}
		else
			cout << "No one is the winner. " << endl;
	}

	return 0;
}