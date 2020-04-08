#include<iostream>
using namespace std;
int sum(int arr[],int n){
	if(n>=0)
		return sum(arr,n-1)+arr[n];
	else
		return 0;
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<sum(arr,9);
}
