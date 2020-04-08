#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int mul(int a,int b);
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	cout<<"the multiplication is:"<<mul(x,y)<<endl;
	return 0;
}
int mul(int a,int b)
{
	return (a*b);
}
