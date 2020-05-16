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
void IMergeSort(int A[], int n)
{
	int p,i,l,mid,h;
	for(p=2;p<=n;p=p*2)				//for passes (logn) time
	{
		for(i=0;i+p-1<n;i=i+p)		// i=i+p because the list size gets doubled after every pass
		{
			l = i;
			h = i+p-1;
			mid = (l+h)/2;
			Merge(A,l,mid,h);	  //calling the merge function
		}
	}
	if(p/2 < n)	Merge(A,0,(p/2)-1,n-1); // if odd number of elements(or the remaining unsorted elements)
}
int main()
{
	int A[]={8,3,7,4,9,2,6,5,1};
	IMergeSort(A,9);
	for(int i=0;i<8;i++)
		cout<<A[i]<<endl;
	return 0;
}
