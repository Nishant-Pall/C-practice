#include<iostream>
using namespace std;

int nBST(int n ,int *arr){
	if(n==0||n==1){		// Base case
		return 1;
	}
	int ans=0;
	for(int i=1; i<=n; i++){
		if(arr[i-1]==-1)
			arr[i-1] = nBST(i-1, arr); 		// recursive call on left subtree
		if(arr[n-i]==-1)
			arr[n-i] = nBST(n-i, arr); 		// recursive call on right subtree
		ans += arr[i-1]*arr[n-i];
	}
	return ans;
}
int printNumBST(int n){
	int *arr = new int[n+1];
	for(int i=0; i<n; i++){
		arr[i] = -1;
	}
	return nBST(n, arr);
}

int main(){
	int n;
	cin>>n;
	cout<<printNumBST(n);
}
