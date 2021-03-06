#include<iostream>
using namespace std;

int FindMax(int A[],int n)
{
	int max = INT_MIN;
	for(int i = 0; i<n; i++)
	{
		if(A[i] > max)
			max = A[i];
	}
	return max;
}

void CountSort(int A[], int n)
{
	int max;
	int *C;
	int i,j;
	max = FindMax(A,n);
	C = new int[max+1];
	
	for(i = 0; i<max+1;i++)
		C[i]=0;
	
	for(i =0; i<n;i++)
		C[A[i]]++;
		
	i = 0;
	j = 0;	
	
	while(i<max+1)
	{
		if(C[i]>0)
		{
			A[j++] = i;
			C[i]--;
		}
		else
			i++;
	}
}

int main()
{
	int A[] = {6,3,9,10,15,6,8,12,3,6};
	CountSort(A,10);
	for(int i =0;i<10;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}
