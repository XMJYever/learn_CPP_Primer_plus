#include "iostream"
#include "math.h"
#include"stdint.h"
#include "mex.h"
#include "mat.h"
#include<stdio.h>
#include<malloc.h>
double *getvector(double *A, int i, int j)
{
	double  *r = (double  *)malloc(640 * sizeof(double));   
	int t = i * 640;
	
	for (int n = 0; n < 640; n++)
	{
		r[n] = A[ j * 65536+t ];
		t++;
	}
	return r;

}
double *getnewvector(double *A, int start, int end)
{
	int ind = end - start + 1, t = 0;;
	double *num = (double*)malloc(ind * sizeof(double));
	
	for (int n = start; n < end; n++)
	{
		num[t] = A[n] ;
		t++;
	}
	return num;
}

int max_ind(double *a, int n)
{
	   int max_ind=0 ;
	   double mm = *a;
	   for (int i = 0; i < n; i++)
	         {
		           if (*(a+i) > mm)
				   {
			        mm = *(a+i);
			        max_ind = i;
		            }
	          }
	   return max_ind;
}

int min_ind(double *a, int n)
{
	int min_ind=0;
	double mm = *a;
	for (int i = 0; i < n; i++)
	{
		if (a+i < mm)
		{
			mm = &(a+i);
			min_ind = i;
		}
	}
	return min_ind;
}


double variance(double *a, int n)
{
	double sum = 0, mean = 0 , standardDeviation = 0;
	for (int i = 0; i<n; i++)
	{
		sum += &(a+i);
	}
	mean = sum / n;
	for (int i = 0; i < n; i++)
	{
		standardDeviation += pow(&(a+i) - mean, 2);
	}
	return standardDeviation / n;
}


int  Caculate_AIC( double*a , int n)
{
	int  max_index = max_ind(a, n) , r=0;
	double vars_1, vars_2;

	double  *t = (double  *)malloc(max_index * sizeof(double));
	for (int i = 0; i < max_index; i++)
	{
		double *s1, *s2;
		s1 = getnewvector(a, 0, i + 1);
		int cnt1 = i + 1;
		double vars1 = variance(s1, cnt1);
		if (vars1 <= 0)
			vars_1 = 0;
		else
			vars_1 = log(vars1);
		s2 = getnewvector(a, i + 1, max_index + 1);
		int cnt2 = max_index - i;

		double vars2 = variance(s2, cnt2);
		if (vars2 <= 0)
			vars_2 = 0;
		else
			vars_2 = log(vars2);
		t[i] = (i)*vars_1 + (max_index - i - 1)*vars_2;
		free(s1);
		free(s2);
	}
	return min_ind(t, max_index);

	free(t);
	
}


bool isempty(double *a, int n)
{
	if (a)
	  {
             for (int i = 0; i < n; i++)
			 {   if (a[i] != 0)
				return false;
			 }
	   }
	return true;
}

/* The matlab mex function  */
void mexFunction(int nlhs, mxArray *plhs[],
	int nrhs, const mxArray *prhs[])
{
	double  *a,*b;
	double sample_start, sample_end;
	double  *out;
	plhs[0] = mxCreateDoubleMatrix(256, 64, mxREAL);
	out = mxGetPr(plhs[0]);

	a= mxGetPr(prhs[0]);
	b= mxGetPr(prhs[1]);
	double *c= getvector(a, 0, 84);

	double *p;
	for (int emit = 0; emit < 64; emit++)
		for (int rec = 0; rec < 256; rec++)
		{
			p = getvector(a, emit, rec);
			if (isempty(p, 640))
			{
				out[emit * 256 + rec] = 0;
			}
			else
			{
				sample_start = b[emit * 256 + rec] - 25;
				sample_end = b[emit * 256 + rec] + 25;
				int length = sample_end - sample_start + 1;
				double *new_vector = getnewvector(p, sample_start, sample_end);
				int ind = Caculate_AIC(new_vector, length);
				out[emit * 256 + rec] = ind+ sample_start;
				free(new_vector);
			}
			free(p);
		}
	return;
}