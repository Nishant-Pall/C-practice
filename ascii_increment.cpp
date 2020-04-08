#include<iostream>
using namespace std;
int main()
{
	char ch= 'A'; //assign ascii code for A to ch
	int num=ch;   //store same code in an int
	cout<<"the ascii code for"<<ch<<"is:"<<num;
	ch= ++ch;
	num = ch;
	cout<<"The ascii code for"<<ch<<"is:"<<num;
	return 0;
}