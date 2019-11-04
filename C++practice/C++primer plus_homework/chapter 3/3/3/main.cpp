#include <iostream>

#define DEG2MIN 60
#define MIN2SEC 60

int main() {
	using namespace std;
	int degree, minutes, seconds;
	double minutes_total, degree_total;
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees:";
	cin >> degree;
	cout << "Next, enter the degrees:";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	minutes_total = minutes + seconds / MIN2SEC;
	degree_total = degree + minutes / DEG2MIN;
	cout << degree << "degrees, " << minutes << "minutes, " << seconds << "seconds = " << degree_total <<"degrees"<< endl;
	return 0;
}