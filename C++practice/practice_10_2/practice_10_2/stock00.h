#ifndef STOCK00_H_
#define STOCK00_H_
#include <iostream>
#include <string>

class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares*share_val; }
public:
	//two constructors
	Stock();  //���캯��
	Stock(const std::string &co, long num, double price);
	~Stock();  //��������
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

#endif