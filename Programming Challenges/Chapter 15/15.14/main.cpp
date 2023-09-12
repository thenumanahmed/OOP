#include <iostream>
#include <string>
#include "Generic.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"

using namespace std;

void withdraw(Generic *);
void deposit(Generic *);
void viewAccountStats(Generic *);
char inputAccountChoice();
char inline inputMenuChoice();

int main()
{
	Generic *myAccount = nullptr;
	char choice;
	bool flag = true;
	do
	{
		flag = true;
		choice = inputAccountChoice();
		if (choice == '1')
		{
			myAccount = new SavingAccount;
		}
		else if (choice == '2')
		{
			myAccount = new CheckingAccount;
		}
		else
		{
			cout << "Enter valid Choice " << endl;
			flag = false;
		}
	} while (flag == false);
	while (flag)
	{
		choice = inputMenuChoice();
		if (choice == '1')
		{
			deposit(myAccount);
		}
		else if (choice == '2')
		{
			withdraw(myAccount);
		}
		else if (choice == '3')
		{
			viewAccountStats(myAccount); // make function
		}
		else if (choice == '4')
		{
			break;
		}
	}

	delete myAccount;
	return 0;
}

char inputAccountChoice()
{
	char choice;
	cout << "Which account do you want to Open: " << endl;
	cout << "	1- Saving Account " << endl;
	cout << "	2- Checking Account " << endl;
	cin >> choice;
	return choice;
}
char inline inputMenuChoice()
{
	char choice;
	cout << "        | Account Menu |" << endl;
	cout << "1- Deposit Money. " << endl;
	cout << "2- Withdraw Money. " << endl;
	cout << "3- View Account Statistics. " << endl;
	cout << "4- Exit. " << endl;
	cin >> choice;
	return choice;
}
void withdraw(Generic *account)
{
	int amount;
	cout << "Enter the amount to withdraw ";
	cin >> amount;
	account->withdraw(amount);
}

void deposit(Generic *account)
{
	int amount;
	cout << "Enter the amount to deposit ";
	cin >> amount;
	account->deposit(amount);
}

void viewAccountStats(Generic *account)
{
	cout << endl
		 << endl;
	cout << "    | ACCOUNT STATISTICS |" << endl;
	cout << " Beginning Balance: " << account->getBeginningBalance() << endl
		 << " Total Amount of Deposits: " << account->getTotalDepositAmount() << endl
		 << " Total Amount of Deposits: " << account->getTotalWithdrawAmount() << endl
		 << " Service Charges: " << account->getServiceCharges() << endl;
	account->monthlyProc();
	cout << " Ending Balance: " << account->getBalance() << endl;
	cout << endl
		 << endl;
}