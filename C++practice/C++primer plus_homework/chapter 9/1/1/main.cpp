#include <iostream>
#include "golf.h"
#include <vector>

#define Num 5

using namespace std;

int main()
{
	golf gf[Num];
	char name[Len];
	int handc;
	int n = 0;
	cout << "please enter the information of golf player: " << endl;
	while (n < Num && setgolf(gf[n]))
	{
		n++;
		cout << "Next player: ";
	}
	cout << "show all golf information: " << endl;
	for (int i = 0; i < n; i++)
	{
		showgolf(gf[i]);
	}
	system("pause");
	return 0;
}