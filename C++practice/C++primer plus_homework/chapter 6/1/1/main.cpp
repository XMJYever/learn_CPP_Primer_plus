#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	
	cout << "please enter some words, enter @ to quit: ";
	while ((ch = cin.get()) != '@')
	{
		if (isdigit(ch))
		{
			continue;
		}
		else if (isupper(ch))
		{
			cout << (char)tolower(ch);
		}
		else if (islower(ch))
		{
			cout << (char)toupper(ch);
		}
	}
	cout << "Done! "<<endl;
}