#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <iostream>
#include <string>
#define Len 25
using std::string;
class BankAccount
{

public:
	BankAccount(const BankAccount & BA);
	BankAccount(const char *nm, const string &acc, const float &dp);
	~BankAccount() { };
	void putin(const float &dp);
	void pullout(const float &dp);
	char showName();
	string showAccount();
	float showDeposit();
	bool check();
private:
	char name[Len] = "none";
	string account = "none";
	float deposit = 0;
};

#endif