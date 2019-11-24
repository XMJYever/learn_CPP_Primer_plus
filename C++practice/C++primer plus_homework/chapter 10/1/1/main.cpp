#include <iostream>
#include "bankaccount.h"
#include <vector>

int main()
{
	BankAccount temp("banjing", "liuxy", 500000000);
	std::cout << "the name is: "<<temp.showName()<<std::endl; // 一定要加(),调用了operator()
	std::cout << "the account is: " << temp.showAccount() << std::endl;
	std::cout << "the deposit is: " << temp.showDeposit() << std::endl;
	std::cout << "please put in additional deposit: ";
	float money;
	std::cin >> money;
	temp.putin(money);
	std::cout << "the total deposit after adding is: " << temp.showDeposit() << std::endl;

	system("pause");

	std::vector<BankAccount> accounts;
	while (temp.check())
	{
		accounts.push_back(temp);
	}

	return 0;
}