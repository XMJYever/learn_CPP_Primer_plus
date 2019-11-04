#include <iostream>
#include "stock00.h"

int main() {
	using std::cout;
	cout << "Using constructors to create new objects\n";
	Stock stock1("NanoSmart", 12, 20.0);  //构造函数初始化
	stock1.show();
	Stock stock2("Boffo Objects", 2, 2.0);
	stock2.show();

	cout << "Assigning stock1 to stock2: \n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2: \n";
	stock1.show();
	stock2.show();

	cout << "Using a constructer to reset an object\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);  // temp object
	cout << "Revised stock1: \n";
	stock1.show();
	cout << "Done.\n";
	
	return 0;
}