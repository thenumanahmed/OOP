#ifndef SAVINGACCOUNT
#define SAVINGACCOUNT
#include <iostream>
#include "Generic.h"

class SavingAccount : public Generic
{
protected:
	bool status;

public:
	SavingAccount();
	void setStatus();
	bool getStatus();
	void withdraw(double);
	void deposit(double);
	double getServiceCharges();
	void monthlyProc();
};

// Constructor
SavingAccount::SavingAccount() : Generic()
{
	status = false;
}
void SavingAccount::setStatus()
{
	if (balance >= 25)
	{
		status = true; // true for active
	}
	else
		status = false; // false for inactive
}
bool SavingAccount::getStatus()
{
	setStatus();
	if (balance < 25)
	{
		return false;
	}
	else
		return true;
}
void SavingAccount::withdraw(double amount)
{
	if (getStatus())
	{
		Generic::withdraw(amount);
	}
	else
	{
		cout << "Balance is low than $25 " << endl;
	}
}
void SavingAccount::deposit(double amount)
{
	if (getStatus())
	{
		Generic::deposit(amount);
	}
	else if (!getStatus() && ((balance + amount) > 25))
	{
		Generic::deposit(amount);
		setStatus();
	}
	else
	{
		cout << "Balance is low than $25 " << endl;
	}
}
double SavingAccount::getServiceCharges()
{
	double serviceCharges; // temp variable is used so that it will
						   // not modify the original service charge variable
	if (noOfWithdrawals > 4)
	{
		serviceCharges = (monthlyServiceCharges + (noOfWithdrawals - 4));
	}
	else
		serviceCharges = monthlyServiceCharges;
	return serviceCharges;
}
void SavingAccount::monthlyProc()
{

	if (noOfWithdrawals > 4)
	{
		monthlyServiceCharges += 1 * (noOfWithdrawals - 4);
	}

	Generic::monthlyProc();
	setStatus();
}
#endif