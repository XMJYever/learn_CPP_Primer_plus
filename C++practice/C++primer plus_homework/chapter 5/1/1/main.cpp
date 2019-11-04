#include <iostream>

using namespace std;
void sort(int &, int &);

int main()
{
	int m, n;
	int sum = 0;  // 一定要赋初值
	cout << "please enter a number(type: int): ";
	cin >> m;
	cout << "please enter another number(type: int)：";
	cin >> n;
	sort( m, n);

	for (int i = m; i < n+1; i++)
	{
		sum += i;
	}

	cout << "sum: " << sum << endl;
}

void sort(int &a, int &b)
{
	int temp;
	if (a > b)
	{
		temp = b;
		b = a;
		a = temp;
	}
}