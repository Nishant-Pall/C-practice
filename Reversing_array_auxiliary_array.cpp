#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(i=0; i<n; i++)
#define Fo(i, k, n) for(i=k; i<n; i++)

void reverse(int A[], int n)
{
	int *B = new int[n]; // O(n)
	for(int i=0; i<10; i++) {
		cout<<A[i]<<" ";
	}
	cout<<endl<<"Now reversing the array"<<endl;

	for(int i=9,j=0; i>=0; i--,j++) {
		B[j]=A[i];
	}
	for(int i=0; i<10; i++) {
		A[i]=B[i];
	}
	for(int i=0; i<10; i++) {
		cout<<A[i]<<" ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A[10]= {1,2,3,4,5,6,7,8,9,10};
	reverse(A, 10);
	return 0;
}
