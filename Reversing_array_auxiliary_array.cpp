#include<iostream>
using namespace std;
int main(){
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int B[10];
	
	for(int i=0;i<10;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl<<"Now reversing the array"<<endl;
	
	for(int i=9,j=0;i>=0;i--,j++){
		B[j]=A[i];
	}
	for(int i=0;i<10;i++){
		A[i]=B[i];
	}
	for(int i=0;i<10;i++){
		cout<<A[i]<<" ";
	}
return 0;	
}
