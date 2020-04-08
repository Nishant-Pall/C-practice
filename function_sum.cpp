#include<iostream>
using namespace std;
int main()
	{
	int sum(int x,int y);
	int x,y,s;
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	s=sum(x,y);
	cout<<"the sum is "<<s<<endl;
	return 0;
}

	int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
