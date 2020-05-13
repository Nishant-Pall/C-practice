#include<iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
	int i,j;
	
	for(i = 0; i < n-1; i++)
	{
		j = i - 1;              // will start from the element previous to A[i]
		int x = A[i];			// store the element to be inserted in x
		while(j > -1 && A[j] > x) // keep going till we find the right postion for x and j should be 
		{						  // greater than -1 incase the element is the smallest
			A[j+1] = A[j];		 // shifting elements
			j--; 				 // decrementing j
		}
		A[j+1] = x;				// assigning A[j+1] because j gets decremented one more time before the while loop finishes
	}
}

int main()
{
	int A[] = {10,30,40,70,20,50,60};
	
	InsertionSort(A, 7);
	
	for(int i = 0; i<7;i++)
		cout<<A[i]<<endl;
	return 0;
}
