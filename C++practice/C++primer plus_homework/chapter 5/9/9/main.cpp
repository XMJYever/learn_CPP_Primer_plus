#include <iostream>
#include <string>

using namespace std;

int main()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	int line = 1;
	int i = 1;
	int j = rows - 1;

	while (line <= rows)
	{
		for (int j = rows - line; j > 0; j--)
		{
			cout << ".";
		}

		for (int  m = 0; m < i; m++)
		{
			cout << "*";
		}
		i++;
		cout << "\n";
		line++;
	}
	system("pause");
	return 0;
}