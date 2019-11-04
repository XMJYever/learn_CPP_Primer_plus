#ifndef VECT_H_
#define VECT_H_
#include <iostream>

namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode
		{RECT, POL};
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;    //RECT or POL

		//private methods for setting values
		void set_x();
		void set_y();
		void set_mag();
		void set_ang();

	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT); //声明时的初始化很关键
		~Vector();
		double xval() const {
			return x;
		}
		double yval() const {
			return y;
		}
		double magval() const {
			return mag;
		}
		double angval() const {
			return ang;
		}
		void polar_mode();
		void rect_mode();
		// operator overloading
		Vector operator+(const Vector &b) const;
		Vector operator-(const Vector &b) const;
		Vector operator-() const;  // to be negtive
		Vector operator*(double n) const;  //调用时只能是A = B*2.75，不能是A = 2.75*B
		//friends
		friend Vector operator*(double n, const Vector &a);// 友元函数解决了上面存在的问题
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);
	};
}

#endif