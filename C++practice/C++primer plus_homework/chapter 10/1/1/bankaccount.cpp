#include "bankaccount.h"

BankAccount::BankAccount(const char *nm, const string &acc, const float &dp)
{
	strcpy(name, nm);
	account = acc;
	deposit = dp;
}

BankAccount::BankAccount(const BankAccount &BA)
{
	strcpy(this->name, BA.name);
	account = BA.account;
	deposit = BA.deposit;
}

void BankAccount::putin(const float &dp)
{
	deposit += dp;
}

void BankAccount::pullout(const float &dp)
{
	if (deposit > dp)
	{
		deposit -= dp;
	}
	else
	{
		std::cout << "you have not enough money." << std::endl;
	}
}

char BankAccount::showName()
{
	return name[Len];
}

string BankAccount::showAccount()
{
	return account;
}

float BankAccount::showDeposit()
{
	return deposit;
}

bool BankAccount::check()
{
	return name == "none";
}