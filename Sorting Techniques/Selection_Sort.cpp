#include<iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
	int i,j,k;
	i = j = k;
	for(i = 0; i < n-1; i++)
	{
		for(j = k = i; j < n; j++)
		{
			if(A[j] < A[k])
				k = j;
		}
		int temp;
		temp = A[i];
		A[i] = A[k];
		A[k] = temp;
	}
}

int main()
{
	int A[] = {10,30,40,70,20,50,60};
	
	SelectionSort(A, 7);
	
	for(int i = 0; i<7;i++)
		cout<<A[i]<<endl;
	return 0;
}
