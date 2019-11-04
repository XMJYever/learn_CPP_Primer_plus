#include <iostream>
#include <string>
#include <cmath>
#include "stock00.h"

Stock::Stock() {
	std::cout << "Defalut constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long num, double price) {
	company = co;
	if (num < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << "shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = num;
	}
	share_val = price;
	set_tot();
}

Stock::~Stock() {
	std::cout << "Bye, " << company << "!\n";
}

void Stock::buy(long num, double price) {
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price) {
	if (num < 0)
	{
		std::cout << "Number of shares sold can't be negative. "
			<< "Transaction is absorted. \n";
	}
	else if (num > shares)
	{
		std::cout << "You can't sell more than you have! "
			<< "Transaction is absorted. \n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price) {
	share_val = price;
	set_tot();
}

void Stock::show() {
	/*
	std::cout << "Company: " << company
		<< "Shares: " << shares
		<< "Share Price: $" << share_val
		<< "Total Worth: $" << total_val << '\n';
	*/

	using std::cout;
	using std::ios_base;
	//set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout << "Company: " << company
		<< "Share Price: $ " << share_val
		<< "Total Worth: $ " << total_val<<'.\n';

	//restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
