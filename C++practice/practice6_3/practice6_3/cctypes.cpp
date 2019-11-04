#include <iostream>
#include <cctype>

int main() {
	using namespace std;
	cout << "Enter text for analysis, and type @"
		"to terminate input.\n";

	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);

	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else if (isspace)
		{
			whitespace++;
		}
		else
		{
			others++;
		}
		cin.get(ch);
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " puncts, "
		<< others << " others, ";
	system("pause");
	return 0;

}