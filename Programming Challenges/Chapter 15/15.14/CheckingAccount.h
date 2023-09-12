#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include <iostream>
#include "Generic.h"

class CheckingAccount : public Generic
{
public:
	CheckingAccount();
	void withdraw(double);
	double virtual getServiceCharges();
	void monthlyProc();
};

CheckingAccount::CheckingAccount()
{
}
void CheckingAccount::withdraw(double amount)
{
	if (balance - amount < 0)
	{
		Generic::withdraw(15); // 15$ service charges deducted fromthe account
	}
	Generic::withdraw(amount);
}
double CheckingAccount::getServiceCharges()
{
	return (monthlyServiceCharges + (5 + (0.10 * noOfWithdrawals)));
	// it will not modify the original variable
}
void CheckingAccount::monthlyProc()
{
	monthlyServiceCharges += (5 + (0.10 * noOfWithdrawals));
	Generic::monthlyProc();
}
#endif