#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int subSequence(string input, string output[]){
	if(input.empty()){
		return 1;
	}
	string smallString = input.substr(1);
	int smallOutputSize = subSequence(smallString, output);
	for(int i = 0; i< smallOutputSize; i++){
		output[i + smallOutputSize] = input[0] + output[i];
	}
	return 2*smallOutputSize;
}

int main(){
	string input;
	cin>>input;
	int outPutSize = pow(2,input.size());
	string *output = new string[outPutSize];
	int count = subSequence(input, output);
	for(int i=0; i < count; i++){
		cout<<output[i]<<endl;
	}
	return 0;
}
