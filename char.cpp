#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch= 'A'; //assign ascii code for A to ch
	int num=ch;   //store same code in an int
	cout<<"the ascii code for"<<setw(2)<<ch<<setw(2)<<"is:"<<num;
	ch= ++ch;
	num = ch;
	cout<<"The ascii code for"<<ch<<"is:"<<num;
	return 0;
}
