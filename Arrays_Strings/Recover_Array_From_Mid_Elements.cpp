#include<iostream>
using namespace std;

void recoverArray(int input[], int n, int output[]){
	int left, right,mid=n/2;
	int i=0;
	if(n%2!=0){	  // if array's size is odd 
		output[mid] = input[0];	// it's obvious that the mid would be the first element
		left = mid-1;			
		right = mid+1;	
		i++;			// incrementing to 1 because we have already filled the first element
	}
	else{			// if size is even
		left = mid-1;	
		right = mid;
	}
	while(i <n){
		output[left] = input[i];	
		left--;			//move left one step towards left
		i++;			//move to next element of input array
		output[right] = input[i];	
		right++;		// move to right one step
		i++;			//move to next element
	}
	for(i=0;i <n; i++){
		cout<<output[i]<<endl;
	}
}

int main(){
	int input[1000]={3,4,2,5,1,6};
	
	int output[100];
	
	recoverArray(input, 6, output);
	
	return 0;
}
