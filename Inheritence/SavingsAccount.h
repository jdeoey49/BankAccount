#include"BankAccount.h"
#pragma once
class SavingsAccount:public BankAccount
{
	friend std::ostream& operator<<(std::ostream& oref, const SavingsAccount& savref);
public:
	explicit SavingsAccount(int=0,float=0,float=3.5);
	~SavingsAccount();
	void receiveInterestPayment();
	void withdrawMoney(float);
private:
	float interest_rate_;
};

