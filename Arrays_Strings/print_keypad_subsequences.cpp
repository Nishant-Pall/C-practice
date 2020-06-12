#include<iostream>
using namespace std;

string keys[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printSubSequence(int input, string output){
	if(input==0){
		cout<<output<<endl;
		return;
	}
	int val = input%10;
	string key = keys[val];
	for(int i=0; i< key.length(); i++){
		printSubSequence(input/10, key[i] + output);
	}
}

int main(){
	int input;
	string output="";
	cin>>input;
	printSubSequence(input,output);
}
