#include<iostream>
using namespace std;

int num(int input[], int n, int fact[], int freq[] ){
	if(n==0||n==1){			// base case, output would be zero if no digit or only one digit
		return 0;
	}
	int ans=0;				
	/*
		the for loop below starts from the first digit of the input, and will move throught the freq array,
		therefor i will always be greater than input[0] and we will check the number of occurrences of each integer
		eg, if input was 3214, it will start from 3 and traverse from freq[3],hence it will only meet 4 because only 4 is greater
		than 3 and we start from freq[3] in the array therefore we wont meet 1 and 2, once we meet the greater integer which has
		freq more than 1, we add the factorial, because the greater digit at first would produce n-1! combinations
	*/
	for(int i= input[0]+1; i<10; i++){ 	
		if(freq[i] > 0){			
			ans+=fact[n-1];
		}
	}
	freq[input[0]]--; // reducing freq so we wont have to encounter it again
	ans+=num(input + 1, n-1, fact, freq);	//call recursively over the next n-1 digits
	return ans;
}

int main(){
	int n;
	cin>>n;
	int *input = new int[n];   //input array
	int *fact = new int[n+1];  // factorial array to reduce extra work
	fact[0] = 1;
	int freq[10] = {0};
	for(int i=0; i<n;i++){
		cin>>input[i];
		freq[input[i]]++;	  // increasing frequency	
		fact[i+1] = (i+1)*fact[i];	// storing the factorial in fact array 
	}
	cout<<num(input, n, fact, freq);
}
