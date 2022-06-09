#ifndef GENERIC
#define GENERIC
#include <iostream>
using namespace std;

class Generic
{
protected:
	double balance;
	double beginningBalance;
	double totalDepositAmount;
	double totalWithDrawAmount;
	int noOfDeposits;
	int noOfWithdrawals;
	double annualInterestRate;
	double monthlyServiceCharges;

public:
	Generic();
	Generic(double, double);
	double virtual getBeginningBalance();
	double virtual getBalance();
	double virtual getTotalDepositAmount();
	double virtual getTotalWithdrawAmount();
	double virtual getServiceCharges() = 0;
	void virtual deposit(double);
	void virtual withdraw(double);
	int getNoOfWithdrawals();
	int getNoOfDeposits();
	void virtual calcInt();
	void virtual monthlyProc();
	virtual ~Generic();
};

Generic::Generic()
{
	balance = 0.0;
	noOfDeposits = 0;
	noOfWithdrawals = 0;
	annualInterestRate = 0.0;
	monthlyServiceCharges = 0;
	beginningBalance = 0;
	totalDepositAmount = 0;
	totalWithDrawAmount = 0;
}
Generic::Generic(double balance, double interestRate)
{
	this->balance = balance;
	annualInterestRate = interestRate;
	noOfDeposits = 0;
	noOfWithdrawals = 0;
	monthlyServiceCharges = 0;
	beginningBalance = 0;
	totalDepositAmount = 0;
	totalWithDrawAmount = 0;
}
double Generic::getBeginningBalance()
{
	return beginningBalance;
}
double Generic::getBalance()
{
	return balance;
}
double Generic::getTotalDepositAmount()
{
	return totalDepositAmount;
}
double Generic::getTotalWithdrawAmount()
{
	return totalWithDrawAmount;
}
void Generic::deposit(double amount)
{
	balance += amount;
	noOfDeposits++;
	totalDepositAmount += amount;
}
void Generic::withdraw(double amount)
{
	balance -= amount;
	noOfWithdrawals++;
	totalWithDrawAmount += amount;
}
int Generic::getNoOfWithdrawals()
{
	return noOfWithdrawals;
}
int Generic::getNoOfDeposits()
{
	return noOfWithdrawals;
}
void Generic::calcInt()
{
	double monthlyInterestRate = (annualInterestRate / 12.0);
	double monthlyInterest = balance * monthlyInterestRate;
	balance += monthlyInterest;
}
void Generic::monthlyProc()
{
	balance -= monthlyServiceCharges;
	calcInt();
	noOfDeposits = 0;
	noOfWithdrawals = 0;
	monthlyServiceCharges = 0;
	totalDepositAmount = 0;
	totalWithDrawAmount = 0;
	beginningBalance = balance;
}
Generic::~Generic()
{
}

#endif