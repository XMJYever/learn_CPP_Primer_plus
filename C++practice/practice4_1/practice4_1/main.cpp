// arrayone.cpp   -- small arrays of integers
#include <iostream>

using namespace std;

int main() {
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = { 20,30,5 };

	cout << "total yams = :";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "the package with" << yams[1] << "yams costs";
	cout << yamcosts[1] << "cents per yam.\n";
	int total = yams[0] * yams[0] + yams[1]* yamcosts[1];
	total = total + yams[2] + yamcosts[2];
	cout << "the total yam expense is" << total << endl;
	cout << "Size of yams array =" << sizeof yams;
	cout << "bytes,\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << "bytes,\n";
	system("pause");
	return 0;
}