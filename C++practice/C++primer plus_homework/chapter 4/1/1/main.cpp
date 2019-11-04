#include <iostream>

using namespace std;

int main() {
	char fir_name[128];
	char las_name[128];
	char grade;
	int age;
	cout << "What is your first name? ";
	cin >> fir_name;
	cout << "What is your last name? ";
	cin >> las_name;
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << fir_name << ", " << las_name<<endl;
	cout << "Grade: " << char(grade+1) << endl;
	cout << "Age: " << age << endl;
	return 0;
}