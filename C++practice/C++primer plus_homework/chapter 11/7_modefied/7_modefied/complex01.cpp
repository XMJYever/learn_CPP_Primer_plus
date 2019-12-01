#include "complex01.h"

template <class T>
Complex<T>::Complex(T & rl, T &img)
{
	real = rl;
	imagin = img;
}

template <class T>
Complex<T> Complex<T>::operator+(const Complex &compB) const
{
	this->real += compB.real;
	this->imagin += compB.imagin;
	return *this;
}

template <class T>
Complex<T> Complex<T>::operator-(const Complex &compB) const
{
	this->real -= compB.real;
	this->imagin -= compB.imagin;
	return *this;
}

template <class T>
Complex<T> Complex<T>::operator*(const Complex &compB) const
{
	this->real = this->real * compB.real;
	this->imagin = this->imagin * compB.imagin;
	return *this;
}

template <class T>
Complex<T> operator~(Complex<T> &comp)
{
	return Complex<T>(comp.real, -comp.imagin);
}

template <class T>
Complex<T> operator*(Complex<T> &comp, T x)
{
	comp.real = x * comp.real;
	comp.imagin = x * comp.imagin;
	return Complex<T>(comp.real, comp.imagin);
}