#include<iostream>
using namespace std;

struct Array{
	int A[10];
	int size;
	int length;
	
};

void display(struct Array arr){
	int i;
	for(i=0;i<arr.length;++i){
		cout<<arr.A[i]<<endl;
	};
}
void insert(struct Array *arr,int index,int x){
	int i;
	for(i=arr->length;i>index;--i)
		arr->A[i]=arr->A[i-1];
	arr->A[index]=x;
	arr->length++;	
}
int main(){
	struct Array arr={{2,3,4,5,6},10,5};
	insert(&arr,2,15);
	display(arr);
	return 0;
}
