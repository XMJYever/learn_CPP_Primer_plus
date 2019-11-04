#include <iostream>
#include <array>
#include <cctype>

using namespace std;
const int SIZE = 10;

int main()
{
	array<double, SIZE> donation;
	int m = 0;
	double total_value = 0;
	double avg = 0.0;
	cout << "please enter up to ten double value, Non-digital to exit " << endl;
	while (m < SIZE && (cin>>donation[m]))
	{
		
		total_value += donation[m];
		m++;
		
	}
	avg = total_value / m;

	cout << "TotalValue: " << total_value << ", average value: " << avg << endl;
	system("pause");
	return 0;
}