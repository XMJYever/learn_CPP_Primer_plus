#include <iostream>

using namespace std;

double avg(double & , double &);

int main()
{
	double x, y;
	double average;
	cout << "Please enter two numbers: " << endl;
	cin >> x;
	cin >> y;
	if (x != 0 || y != 0)
	{
		average = avg(x, y);
		cout << "the" << x << "and" << y << " average value is: " << average << endl;
		cout << "Please enter two numbers: " << endl;
		cin >> x;
		cin >> y;
	}
	else
	{
		cout << "error!" << endl;
	}

	return 0;
}

double avg(double &a, double &b)
{
	return 2.0*a*b / (a + b);
}