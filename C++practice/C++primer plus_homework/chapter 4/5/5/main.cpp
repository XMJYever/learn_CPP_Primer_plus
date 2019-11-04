#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct CandyBar
	{
		string brand;
		float weight;
		int calory;
	};
	CandyBar snack = { "Mocha Munch" , 2.3 , 350 };
	cout << snack.brand<<snack.weight<<snack.calory << endl;

	return 0;
}