#include<iostream>
using namespace std;

void Merge(int A[],int l,int mid, int h)
{
	int i,j,k;
	i=l;
	j=mid+1;
	k=l;
	int B[h+1];
	while(i<=mid && j<=h)
	{
		if(A[i] < A[j])
			B[k++]=A[i++];
		else
			B[k++]=A[j++];
	}
	for(;i<=mid;i++)
		B[k++]=A[i];
	for(;j<=h;j++)
		B[k++]=A[j];
		
	for(i=l;i<=h;i++)
		A[i]=B[i];
}
void RMergeSort(int A[], int l,int h)
{
	int mid;
	if(l<h)
	{
		mid = (l+h)/2;
		RMergeSort(A,l,mid);
		RMergeSort(A,mid+1,h);
		Merge(A,l,mid,h);
	}
}
int main()
{
	int A[]={8,3,7,4,9,2,6,5};
	RMergeSort(A,0,7);
	for(int i=0;i<8;i++)
		cout<<A[i]<<endl;
	return 0;
}
