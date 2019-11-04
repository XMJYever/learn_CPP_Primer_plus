// strctfun.cpp -- function with a structure argument
#include <iostream>
#include <cmath>
struct rect
{
	double x;
	double y;
};
struct polar
{
	double distance;
	double angle;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
	using namespace std; 
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

polar rect_to_polar(rect xypos) {
	using namespace std;
	polar answer;

	answer.distance = sqrt(xypos.x*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "Distance = " << dapos.distance;
	cout << ", Angle = " << dapos.angle*Rad_to_deg;
	cout << "degrees\n";
}