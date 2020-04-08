#include<iostream>
using namespace std;
int main()
{
	int i,a,b,c;
	for(i=0;i<20;++i)
	{
		cout<<"enter two numbers";
		cin>>a>>b;
		if(b==0)
		break;
		else
		c=a/b;
		cout<<"quotient is"<<c<<endl;
	}
	cout<<"program over!!!";
	return 0 ;
}
