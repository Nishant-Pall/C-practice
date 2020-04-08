#include<iostream>
using namespace std;
int Reverse(int &A[],int n){
	for(int i=0,j=0;i<j;i++,j--){
		int temp;
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
	}
}
int main(){
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl<<"Now reversing the array"<<endl;
	cout<<Reverse(A,10);
	return 0;
}

