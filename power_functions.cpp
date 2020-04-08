#include<iostream>
using namespace std;
int main()
{   
	int x,n;
	int pow(int x,int n);
	cout<<"Enter x and n"<<endl;
	cin>>x>>n;
	cout<<"x to the power n is "<<pow(x,n)<<endl;
	return 0;
}
int pow(int a,int b)
{   
	int c=1;
	for(int i=0;i<b;++i)
	{
		c=c*a;
	}
	return(c);
}
