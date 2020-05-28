#pragma once
class BankAccount
{
	friend std::ostream& operator<<(std::ostream& oref, BankAccount& bref);
public:
	explicit BankAccount(int=0,float=0);
	~BankAccount();
	int getAccountNumber() const { return account_number_; }
	float getBalance() const { return balance_;}
	void setAccountNumber(int acccount_num_) { account_number_=acccount_num_ ; }
	void setBalance(int balance) { balance_ = balance; }
	void deposit(float amount) { balance_ += amount;}
private:
	int account_number_;
	float balance_;
};

