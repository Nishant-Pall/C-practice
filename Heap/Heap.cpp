#include <stdio.h>
#include<iostream>
using namespace std;

void Insert(int A[],int n)
{
	 int i=n,temp;
	 temp=A[i];
	 while(i>1 && temp>A[i/2])
	 {
		 A[i]=A[i/2];     	// bring parent child's position
		 i=i/2;			    // bring i to the parent's postion
	 }
	 A[i]=temp;
}
int Delete(int A[],int n)
{
	 int i,j,temp,val;
	 val=A[1];				// Deleting root
	 A[1]=A[n];
	 A[n]=val;				// adding the deleted element in at last so array gets sorted
	 i=1;j=i*2;
	 while(j < n-1)					// not n because last element was deleted/
	 {
		 if(j<n-1 && A[j+1]>A[j])	// check which child is greater
		 j=j+1;						// bring j to the greater child
		 if(A[i]<A[j])
		 {
			 temp=A[i];   //	SWAP
			 A[i]=A[j];   //	 OF 
			 A[j]=temp;   //	ELEMENTS
			 i=j;  		  // Bring i to the child
			 j=2*j;		  // Bring j to it's left child
		 }
		 else
			 break;
	 }
 return val;
}
int main() {
	 int H[]={0,14,15,5,20,30,8,40};  // first element should be zero because indexing starts with 1 in heap
	 int i;
	 for(i=2;i<=7;i++)
	 	Insert(H,i);
	 	
	 cout<<"Heap array:";	
	 for(i=1;i<=7;i++)
		 printf("%d ",H[i]);
	 printf("\n");
	 	
	 for(i=7;i>1;i--)    // decreasing for loop because i is the place where deleted element is stored, not the 
		 Delete(H,i);	// element that is accessed.
		 
	 printf("Sorted array:");	 
	 for(i=1;i<=7;i++)
		 printf("%d ",H[i]);
	 printf("\n");

 return 0;
} 
