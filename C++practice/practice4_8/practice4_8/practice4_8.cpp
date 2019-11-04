// practice4_8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
char *getname(void);

using namespace std;
/*
int main()
{
	double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };

	//here are two ways to get the address of an array
	double *pw = wages;
	short *ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "sizeof pw1 = " << sizeof(pw);
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "sizeof pw2 = " << sizeof(pw);
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	system("pause");
    return 0;
}
*/

/* delete.cpp */
int main() {
	char *name;
	name = getname();
	cout << name << "at" << (int *)name << endl;
	delete [] name;
}

char * getname() {
	char temp[80];
	cout << "enter your name";
	cin >> temp;

	char *pn = new char[strlen(temp) + 1];
	pn = temp;

	return pn;
}