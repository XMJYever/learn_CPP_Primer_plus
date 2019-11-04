// practice2_4.cpp : 定义控制台应用程序的入口点。
// using the sqrt function

#include "stdafx.h"
#include <iostream>
#include <cmath>
void simon(int);  //function prototype for simon

using namespace std;

int main()
{
	double area;
	cout << "enter the floor area,in square feet,of your home:";
	cin >> area;
	double slide;
	slide = sqrt(area);
	cout << endl;
	cout << slide;
	cout << endl;
	system("pause");
    return 0;
}

void simon(int n)   //define the simon() function
{
	using namespace std;
	cout << "Simon says touch your toes" << n << "times." << endl;
}  // void functions don't need return statements  