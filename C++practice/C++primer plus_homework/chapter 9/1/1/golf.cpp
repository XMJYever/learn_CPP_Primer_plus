#include "golf.h"
#include <iostream>
#include <string>

void setgolf(golf &g, const char *name, int hc)
{
	using namespace std;
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf &g)
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "please enter the name: " << endl;
	// 牢记getline、cin.getline、cin.get()的用法和区别
	cin.getline(g.fullname, Len);
	if (strcmp(g.fullname," ")==0)
	{
		return 0;
	}
	cout << "please enter the handicap: " << endl;
	cin >> g.handicap;
	cin.get();

	return 1;
}
void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "fullname: "<<g.fullname<<endl;
	cout << "handicap: " << g.handicap << endl;

}