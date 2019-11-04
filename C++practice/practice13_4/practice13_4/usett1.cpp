// usett1.cpp -- using base class and derived class
#include <iostream>
#include "tabtenn1.h"


int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatingPlayer rplayer(1140, "Mallory", "Duck", true);
	rplayer.Name();
	if (rplayer.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": hasn't a table" << endl;
	if (player1.HasTable())
		cout << ": has a table" << endl;
	else
		cout << ": hasn't a table" << endl;
	
	return 0;
}