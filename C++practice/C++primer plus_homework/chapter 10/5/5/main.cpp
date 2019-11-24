#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct customer
{
	char fullname[35];
	double payment;
};

int main()
{
	stack<customer> stk;
	double total = 0.0;
	customer pop;

	customer customer1 = { "banjing", 1000 };

	stk.push(customer1);
	cout << customer1.fullname << "push." << endl;
}