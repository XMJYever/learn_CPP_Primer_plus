#include <iostream>
#include <string>

using namespace std;

void printString(string &, int);

int main()
{
	string str;
	int n = 1;
	cout << "please enter a string number:" << endl;
	getline(cin, str);
	cout << "please enter the number of print: " << endl;
	cin >> n;

	printString(str, n);
	system("pause");
	return 0;
}

void printString(string & str, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << str << endl;
	}
}
