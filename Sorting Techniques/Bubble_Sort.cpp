#include<iostream>
using namespace std;

void BubbleSort(int A[], int n)
{
	int flag,i,j;
	
	for(i = 0; i < n-1; i++)
	{
		flag = 0;			// assign flag as 0
		for(j = 0; j < n-1-i; j++)	// n-1-i because of reduction in # of comparisons after every pass
		{
			if(A[j]>A[j+1])
			{
				int temp;
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;	
			}
			flag = 1;				// assign flag as 1 to indicate that swap took place
		}
		if(flag==0) break;
	}
}

int main()
{
	int A[] = {10,30,400,70,20,50,60};
	
	BubbleSort(A, 7);
	
	for(int i = 0; i<7;i++)
		cout<<A[i]<<endl;
	return 0;
}
