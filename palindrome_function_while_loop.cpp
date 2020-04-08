#include<iostream>
using namespace std;
int main()
{
	int x;
	int temp(int x),n,digit,rev=0;
	cout<<"Enter any integer"<<endl;
	cin>>x;
	cout<<"The reverse is "<<temp(x)<<endl;
	if(x==temp(x))
	cout<<"The number "<<x<<" is a palindrome"<<endl;
	else
	cout<<"The number "<<x<<" is not a palindrome"<<endl;
	return 0;
}
int temp(int n)
{
	int digit,rev=0;
	do
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}while(n!=0);
	return (rev);
}
	
	
