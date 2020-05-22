#include<iostream>
using namespace std;

void ShellSort(int A[],int n)
{
	int gap,i,j,temp;

	for(gap=n/2;gap>=1;gap/=2)
	{
		for(i=gap;i<n;i++)
		{
			temp=A[i];
			j=i-gap;
			while(j>=0 && A[j]>temp)
			{
				A[j+gap]=A[j];
				j=j-gap;
			}
			A[j+gap]=temp;
		}
	}
}
int main()
{
	int A[] = {9,5,16,8,13,6,12,10,4,2,3};
	ShellSort(A,11);
	for(int i=0;i<11;i++)
	{
		cout<<A[i]<<endl;
	}
}
