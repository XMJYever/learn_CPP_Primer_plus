// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "vect.h"

int main() {
	using namespace std;
	using VECTOR::Vector;
	Vector step;
	Vector result(0.0,0.0);
	srand((unsigned)time(NULL));   //seed random-number generator
	double direction;
	double target;
	unsigned long steps = 0;
	double dstep;

	cout << "Enter the target distance (q to quit):  ";
	while (cin >> target)
	{
		cout << "Enter the step length: ";
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		} 
		cout << "After " << steps << "steps, the subject has the following location:\n";
		cout << result << endl;
		result.polar_mode();  //ת���ɼ�������ʽ���
		cout << "or\n" << result << endl; //������Ԫ�������ص�<<�����
		cout << "Average outward distance per step = " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	} 
	cout << "Bye!\n";
	cin.clear();
	while (cin.get()!='\n')
	{
		continue;
	}
	return 0;
}