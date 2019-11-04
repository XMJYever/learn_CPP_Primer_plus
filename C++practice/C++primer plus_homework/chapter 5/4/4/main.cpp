#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	double origin = 100.0;
	double rate1 = 0.01;
	double rate2 = 0.005;
	double curFin1 = origin, curFin2 = origin;
	
	while (curFin1 >= curFin2)
	{
		curFin1 += origin*rate1;
		curFin2 = curFin2 + curFin2*rate2;
		n++;
	}
	cout << "Daphne: " << curFin1 << " Cleo: " << curFin2 << "Years: " << n << endl;

	return 0;
}