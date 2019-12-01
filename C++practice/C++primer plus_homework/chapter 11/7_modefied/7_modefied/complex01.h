#pragma once
#include <iostream>
#include <cmath>

template <class T>
class Complex
{
public:
	// constructor function
	Complex() { ; }
	Complex(T &rl, T &img);
	~Complex() { ; }

	// operator overloading
	Complex<T> operator+(const Complex &compB) const;
	Complex<T> operator-(const Complex &compB) const;
	Complex<T> operator*(const Complex &compB) const;

	// friend function
	friend Complex<T> operator~(Complex &comp);
	friend Complex<T> operator*(Complex &comp, T &x);

private:
	T real = 0;
	T imagin = 0;
};