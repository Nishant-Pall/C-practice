#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number";
	cin>>a;
	int c=0,i=0;
	while(i<=a)
	{c+=i;
	++i;
	}
	cout<<c;
	return 0;
}
