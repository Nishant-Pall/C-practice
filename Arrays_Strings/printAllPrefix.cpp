#include<iostream>
using namespace std;

void printAllPrefix(char input[]){
	for(int i=0;input[i]!='\0';i++){
		for(int j=0; j<=i;j++){
			cout<<input[j];
		}
		cout<<endl;
	}
}

int main(){
	char input1[100];
	cout<<"Enter string:";
	cin>>input1;
	
	printAllPrefix(input1);
	
	return 0;
}
