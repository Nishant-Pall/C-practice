#include <iostream>
#include <string>
using namespace std;

int getCodesIterative(int* input, int size, int*arr) {
   int *output = new int[size+1];
   output[0] = 1;
   output[1] = 1;
   for(int i=2; i<size; i++){
   	output[i] = output[i-1];
   	if(input[i-2]*10+input[i-1] <= 26){
   		output[i] += output[i-2];
	   }
   }
   int ans = output[size];
   delete[] output;
   return ans;
}

int main(){
    int size;
    cin>>size;
    int *input = new int[size];
    int *arr = new int[size+1];
    for(int i=0; i<size; i++){
    	arr[i]=0;
	}
    for(int i=0; i<size; i++){
    	cin>>input[i];
	}
	cout<<getCodesIterative(input, size, arr);
}
