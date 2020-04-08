#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number:"<<endl;
	cin>>n;
	int sum=0,d=0;
	do{
		sum=sum+n%10;
		n=n/10;
		d++;
	}
	while(n>0);
	cout<<"Number of digits in are:"<<d<<endl;
	cout<<"Sum of digits:"<<sum<<endl;
	return 0;
}
