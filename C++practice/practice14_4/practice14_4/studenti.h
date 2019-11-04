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
	explicit Student(const std::string & s) : std::string(s), ArrayDb() {} // ��ʾ���ã� ����һ��������string
	explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}    // ��Ȼ��������������������һ����Ĭ��ֵ
	Student(const std::string & s, int n) :std::string(s), ArrayDb(n) {} // �������������� һ������һ��intֵ
	Student(const std::string & s, const ArrayDb & a) :std::string(s), ArrayDb(a) {} //��������������Ϊ����
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