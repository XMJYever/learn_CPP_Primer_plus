#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <iostream>
#include <string>
#include <valarray>

class Student : private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	// private method for scores output
	std::ostream & arr_out(std::ostream & os) const;

public:
	Student() : std::string("Null Student"), ArrayDb() {}
	explicit Student(const std::string & s) : std::string(s), ArrayDb() {} // 显示调用， 传入一个参数，string
	explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}    // 虽然有两个参数，但是其中一个有默认值
	Student(const std::string & s, int n) :std::string(s), ArrayDb(n) {} // 传入两个参数， 一个对象，一个int值
	Student(const std::string & s, const ArrayDb & a) :std::string(s), ArrayDb(a) {} //传入两个对象作为参数
	Student(const char * str, const double *pd, int n) :std::string(str), ArrayDb(pd, n) {}
	~Student() {}

	double Average() const;
	double getname(string & s);

	// operator overload
	double & operator[](int i);
	double operator[](int i) const;
	const std::string & Name() const;

//friend 
	//INPUT
	friend std::istream & operator>>(std::string &is, Student & stu);   // 1 word
	friend std::istream & getline(std::string &is, Student & stu);      // 1 line

	//OUTPUT
	friend std::ostream & operator<<(std::ostream & os, const Student & stu);

};


#endif