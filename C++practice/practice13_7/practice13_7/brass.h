#ifndef BRASS_H_
#define BRASS_H_
#include <string>

class Brass
{
private:
	std::string fullName;
	long int accNum;
	double balance;

public:
	Brass(const std::string & nm, const long int ac, double bal);
	void deposit(double amt);
	virtual void withdraw(double amt);
	double Balance() const;
	virtual void ViewAcct() const;
	~Brass();
};

class BrassPlus : public Brass
{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus (const std::string & nm, const long int ac, double bal, double m1, double r);
	BrassPlus(const Brass & ba, double m1, double r);
	virtual void withdraw(double amt);
	virtual void ViewAcct() const;
	void ResetMax(double m) { maxLoan = m; }
	void ResetOwes() { owesBank = 0; }
	~BrassPlus();

};

#endif