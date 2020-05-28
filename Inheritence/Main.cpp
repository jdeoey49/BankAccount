#include<iostream>
#include<vector>
#include"BankAccount.h"
#include"SavingsAccount.h"
using namespace std;
int main()
{
	vector<BankAccount> accountlist;
	BankAccount a(1001, 100.0);
	a.deposit(100);
	accountlist.push_back(a);
	cout << accountlist[0];//stream insertion operator for BankAccount

	SavingsAccount s(1002, 100.0, 0.02);
	cout << s;
	s.deposit(300);//Member function of base class BankAccount
	cout << s;
	s.withdrawMoney(200);//Membeer function of SavingsAccount
	cout << s;
	cout << "\nInterest Payment Day" << endl;
	s.receiveInterestPayment();//Membeer function of SavingsAccount
	cout << s;
	accountlist.push_back(s);
	cout << accountlist[1];//stream insertion operator for BankAccount
}