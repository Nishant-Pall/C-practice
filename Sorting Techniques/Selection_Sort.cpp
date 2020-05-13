#include<iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
	int j,k,i=0;
	i = j = k;
	for(i = 0; i < n-1; i++)
	{
		while(j < n)
		{
			if(A[j] < A[k])
			{
				k = j;
				j++;
			}
		}
		A[i] = A[k];
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
