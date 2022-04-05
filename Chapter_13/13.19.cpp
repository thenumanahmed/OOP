#include <iostream>
#include <string>
using namespace std;

class Question
{
	string questionStatement;
	string possibleAns1;
	string possibleAns2;
	string possibleAns3;
	string possibleAns4;
	int correctAns;

public:
	Question()
	{
		questionStatement = "null";
		possibleAns1 = "null";
		possibleAns2 = "null";
		possibleAns3 = "null";
		possibleAns4 = "null";
		correctAns = 0;
	}
	Question(string q, string a1, string a2, string a3, string a4, int c)
	{
		questionStatement = q;
		possibleAns1 = a1;
		possibleAns2 = a2;
		possibleAns3 = a3;
		possibleAns4 = a4;
		correctAns = c;
	}
	string getPossibleAns1()
	{
		return possibleAns1;
	}
	string getPossibleAns2()
	{
		return possibleAns2;
	}
	string getPossibleAns3()
	{
		return possibleAns3;
	}
	string getPossibleAns4()
	{
		return possibleAns4;
	}
	string getQuestionStatement()
	{
		return questionStatement;
	}
	int getCorrectAns()
	{
		return correctAns;
	}
	void displayQuestion()
	{
		cout << "Q: " << getQuestionStatement() << endl;
		cout << "1) " << getPossibleAns1() << endl;
		cout << "2) " << getPossibleAns2() << endl;
		cout << "3) " << getPossibleAns3() << endl;
		cout << "4) " << getPossibleAns4() << endl;
	}
	bool checkAns(int b)
	{
		if (b == correctAns)
		{
			return true;
		}
		else
			return false;
	}
	void setPossibleAns1(string a)
	{
		possibleAns1 = a;
	}
	void setPossibleAns2(string a)
	{
		possibleAns2 = a;
	}
	void setPossibleAns3(string a)
	{
		possibleAns3 = a;
	}
	void setPossibleAns4(string a)
	{
		possibleAns4 = a;
	}
	void setQuestionStatement(string q)
	{
		questionStatement = q;
	}
	void setCorrectAns(int c)
	{
		correctAns = c;
	}
};

int main()
{
	int choice = 0, player1Score = 0, player2Score = 0;
	Question generalKnowledge[10] = {//===change all questions
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4),
									 Question("How many provinces are in Pak?", "2", "3", "4", "5", 4)};

	for (int i = 0; i < 5; i++)
	{
		generalKnowledge[i].displayQuestion();
		cout << "Enter the correct option: ";
		cin >> choice;
		if (generalKnowledge[i].checkAns(choice))
		{
			player1Score += 1;
		}
	}
	for (int i = 5; i < 10; i++)
	{
		generalKnowledge[i].displayQuestion();
		cout << "Enter the correct option: ";
		cin >> choice;
		if (generalKnowledge[i].checkAns(choice))
		{
			player2Score += 1;
		}
	}

	cout << "The score of player 1 is " << player1Score << endl;
	cout << "The score of player 2 is " << player2Score << endl;
	if (player1Score > player2Score)
	{
		cout << "Player 1 is winner. " << endl;
	}
	else if (player2Score > player1Score)
	{
		cout << "Player 2 is winner" << endl;
	}
	else
		cout << "Tie!" << endl;

	return 0;
}