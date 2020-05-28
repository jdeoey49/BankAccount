#include<iostream>
#include "BankAccount.h"
using namespace std;


BankAccount::BankAccount(int acct_number, float init_balance_):account_number_(acct_number)
,balance_(init_balance_)
{
}

BankAccount::~BankAccount()
{
	//cout << "BankAccount destructor at work" << endl;
}

ostream& operator<<(ostream& oref, BankAccount& bref)
{
	oref << "Bank Account Number:" << bref.account_number_;
	oref << "\tBalance:" << bref.balance_ << endl;
	return oref;
}