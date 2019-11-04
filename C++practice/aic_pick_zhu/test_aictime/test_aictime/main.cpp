#include <iostream>

using namespace std;

int max_ind(double *, int);

int main()
{
	double a[10] = { 1,2,3,4,9,6,7,8,5 };
	double *p = a;
	int max_index;
	max_index = max_ind(p, 10);
	cout << "The max index of the array is : " << max_index << endl;
}

int max_ind(double *a, int n)
{
	int max_ind;
	double m = *a;
	//double m = a[0]; 两种方法都可以
	
	for (int i = 0; i < n; i++)
	{
		if (*(a+i) > m)
		{
			m = *(a+i);
			max_ind = i;
		}
	}
	return max_ind;
}