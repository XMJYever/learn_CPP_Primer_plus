/*#include <iostream>

using namespace std;

int main() {
	char ch;
	int count = 0;
	cin.get(ch);

	while (cin.eof() == false)  // test for EOF
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters read\n";
	system("pause");
	return 0;

	*/
#include<iostream>
#include<limits>
using namespace std;
/*
int main()
{
	int a;

	cout << "Enter an integer number\n";
	cin >> a;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You have entered wrong input" << endl;
			cin >> a;
		}
		if (!cin.fail())
			break;
	}

	cout << "the number is : "<< a << endl;
	return 0;
}*/

int main(void) {
	int ch;
	int count = 0;

	while ((ch=cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << "characters read\n";
	return 0;
}