#include <iostream>
#include <string>
using namespace std;

int getCodes(int* input, int size, int*arr) {
   if(size==0 || size==1) return 1;
   if(arr[size] > 0) return arr[size];
   int output = getCodes(input ,size-1, arr);
   if(input[size-2]*10+input[size-1] <= 26){
   	output += getCodes(input,size-2,arr);
   }
   arr[size] = output;
   return output;
}

int main(){
    int size;
    cin >> size;
    int *input = new int[size];
    int *arr = new int[size+1];
    for(int i=0; i<size; i++){
    	arr[i]=0;
	}
    for(int i=0; i<size; i++){
    	cin>>input[i];
	}
	cout<<getCodes(input, size, arr);
}
