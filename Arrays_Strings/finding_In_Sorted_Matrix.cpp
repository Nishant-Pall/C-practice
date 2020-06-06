#include<iostream>
using namespace std;

void search(int A[][4], int key,int row, int col){
	int i=0, j=col-1;
	while(i<row && j>=0){
		if(A[i][j]==key){
			cout<<i<<" "<<j<<endl;
			return;
		}
		else if(key > A[i][j])
			i++;
		else
			j--;
	}
	cout<<"Not found"<<endl;
}

int main(){
	int A[5][4]={
	{5,7,8,20},
	{9,11,13,30},
	{10,20,29,40},
	{15,23,30,50},
	{18,25,33,60}};
	
	search(A, 23, 5, 4);
	return 0;
}

