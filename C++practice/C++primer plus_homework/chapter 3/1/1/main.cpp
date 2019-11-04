#include <iostream>
#include <cmath>
const int FEET_TO_INCH=12;// 需要分号
#define INCH_TO_CM 2.54  //不需要分号

void feet_to_inch(int);

int main() {
	using namespace std;

	int height_feet;
	cout << "Enter your height (unit:feet)";
	cin >> height_feet;
	feet_to_inch(height_feet);

	return 0;
}

void feet_to_inch(int feet) {
	using namespace std;
	int height_inch;
	height_inch = FEET_TO_INCH * feet;
	cout << "your height shown by unit(inch) is: " << height_inch<<endl;
}