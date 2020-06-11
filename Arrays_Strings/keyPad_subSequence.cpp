#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string hashtable[] = {"","", "abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"};

int subSequence(int input, string output[]){
	if(input==0){
		output[0]="";
		return 1;
	}
	int size = subSequence(input/10, output);
	int n = input%10;
	
	int c = (n==7) || (n==9) ?4:3;
	for(int i=0; i<c; i++){                   // copying the output string
		for(int j=0; j<size; j++){
			output[j +size*i] = output[j];
		}
	}
	for(int i=0; i<c; i++){					// adding the last number's letter
		for(int j=0; j<size; j++){
			output[j +size*i] += hashtable[n][i];
		}
	}
	return c*size;
}

int main(){
	int input;
	cin>>input;
	string *output = new string[1000];
	int count = subSequence(input, output);
	for(int i=0; i < count; i++){
		cout<<output[i]<<","<<endl;
	}
	return 0;
}
