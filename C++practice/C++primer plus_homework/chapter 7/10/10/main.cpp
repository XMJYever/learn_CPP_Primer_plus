#include <iostream>

using namespace std;

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double(*function)(double, double))
{
	return function(x, y);
}

int main()
{
	double x, y;
	double sum = 0;
	double su = 0;
	cout << "Please enter two numbers: ";
	while (cin>>x>>y)
	{
		cout << "Call add, the result of " << x << "and" << y << "is" << calculate(x, y, add) << endl;
		cout << "Call sub, the result of " << x << "and" << y << "is" << calculate(x, y, sub) << endl;

		cout << "Enter next two double number: ";
	}

	return 0;
}