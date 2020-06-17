#include<iostream>
using namespace std;

int MaxSum(int *a, int n){
   int max_so_far = a[0]; 
   int curr_max = a[0]; 
  
   for (int i = 1; i < n; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
} 

int printMaxSum(int n){
	int *arr = new int[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	return MaxSum(arr, n);
}

int main(){
	int n=0;
	cin>>n;
	
	cout<<printMaxSum(n)<<endl;
}
