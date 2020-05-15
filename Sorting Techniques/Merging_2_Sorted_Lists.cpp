#include<iostream>
using namespace std;


int Merge(int A[], int B[], int m, int n)
{
	int C[m+n];
	int i,j,k;
	i=j=k=0;
	
	while(i < m && j < n)
	{
		if(A[i] < B[j])
			C[k++] = A[i++];
		else
			C[k++] = B[j++];		
	}
	for(;i<m;i++)			// for loop if some elements remaining in A
		C[k++] = A[i];
	for(;j<n;j++)
		C[k++] = B[j];      // for loop if some elements remaining in B
		
	for(int i = 0; i< m+n; i++)
		cout<<C[i]<<endl;
}

int main()
{
	int A[] = {1,3,5,7,9};
	int B[] = {2,4,6,8};
	Merge(A,B,5,4);
}
