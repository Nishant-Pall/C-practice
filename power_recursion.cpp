#include<iostream>
using namespace std;
int pow(int m,int n)
{
	if(n>0)
		return pow(m,n-1)*m;
	else return 1;
}
int main()
{
	int x,y;
	cout<<"Enter number and power respectively"<<endl;
	cin>>x>>y;
	cout<<pow(x,y)<<endl;
	return 0;
}
