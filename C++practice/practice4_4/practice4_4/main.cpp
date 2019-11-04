// structur.cpp  --  a simple structure
#include <iostream>
struct  inflatable
{
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99
	};

	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};
	
	cout << "expand your guest list with" << guest.name;
	cout << "and" << pal.name << "!\n";
	cout << "total price:";
	cout << guest.price + pal.price;
	system("pause");
	return 0;
}