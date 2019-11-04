// strfun.spp -- functions with a string argument
#include <iostream>
unsigned char c_in_str(const char *str, char ch);

int main() {
	using namespace std;
	char mmm[15] = "minimum";
	unsigned int ms = c_in_str(mmm, 'm');

	char *wail = "ululate";
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << "m characters in " << mmm << endl;
	cout << us << "u characters in " << wail << endl;

	return 0;
}

unsigned char c_in_str(const char *str, char ch) {
	using namespace std;
	int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}