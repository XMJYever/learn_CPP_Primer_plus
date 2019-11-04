#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
double max(double, int);

int main() {
	double x[5] = { 1.0, 2.0 ,3.0 ,4.0 ,5.0 }; //可以改动
	int o = 0;  //0 and 1表示to_peak or whole
	double xnew[] = {0};
	double x1 = abs(x[5]);
	int max_ind;
	double s1[] = { 0 };
	double s2[] = { 0 };
	double a[] = { 0 };
	int n = 5;

	switch (o)
	{
	case 0:
		max_ind = max(x[5], n);
		for (int i = 0; i < max_ind; i++)
		{
			xnew[i] = x[i];
		}
	case 1:
		for (int i = 0; i < n; i++)
		{
			xnew[i] = x[i];
		}
	default:
		cout << "error";
		break;
	}

	// calculate the aic
	double x1[5];

	for (int i = 0; i < max_ind; i++)
	{
		//这里不知道怎么存储
		s1[i] = variance(xm[i], max_ind);
		s1[i] = log(s1[i]);
	}

	for (int i = max_ind; i < n; i++)
	{
		//xn存储n-max_ind数目
		s2[i] = variance(xn[i], n - max_ind);
		s2[i] = log(s2[i]);
	}

	for (int i = 0; i < n; i++)
	{
		a[i] = i*(s1[i]) + (n - i + 1)*s2[i];
	}

}

double max(double a[], int n) {
	int max_ind = 0;
	double mm = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > mm)
		{
			mm = a[i];
			max_ind = i;
		}
	}
	return max_ind;
}

double ave(double a[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		return sum / n;
	}
}

double variance(double a[], int n)
{
	double sum = 0;
	double average = ave(a, n);
	for (int i = 0; i < n; i++)
	{
		sum += (a[i] - average)*(a[i] - average);
	}
	sum = sum / n;
}