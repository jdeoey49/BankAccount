#include<iostream>
#include "SavingsAccount.h"
using namespace std;


SavingsAccount::SavingsAccount(int acct_number,float init_balance,float int_rate):BankAccount(
	acct_number,init_balance),interest_rate_(int_rate)
{
}

void SavingsAccount::receiveInterestPayment()
{
	float balance = BankAccount::getBalance();
	balance += interest_rate_ * balance;
	BankAccount::setBalance(balance);
}


SavingsAccount::~SavingsAccount()
{
	//cout << "SavingsAccount destructor at work" << endl;
}

void SavingsAccount::withdrawMoney(float amount)
{
	if (BankAccount::getBalance() <= amount)
	{
		cout << endl << "Withdraw of $" << amount << "from account" << BankAccount::getAccountNumber()
			<< "not permitted; insufficient funds." << endl;
	}
	else {
		setBalance(getBalance() - amount);
	}
}

ostream& operator<<(ostream& oref, const SavingsAccount& savref)
{
	oref << "Bank Account number:" << savref.getAccountNumber();
	oref << "\tBalance:" << savref.getBalance();
	oref << "\tRate:" << savref.interest_rate_ << endl;

	return oref;
}
