#include <iostream>

using namespace std;
void time(int, int);

int main() {
	int hour;
	hour = 9;
	int miniute;
	miniute = 28;
	time(hour, miniute);
	system("pause");
	return 0;
}

void time(int hour, int minite) {
	cout << "Enter the number of hours:" << hour << endl;
	cout << "Enter the number of minites:" << minite << endl;
	cout << "Time:" << hour << ":" << minite << endl;
}