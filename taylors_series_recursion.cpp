#include<iostream>
using namespace std;

double e(int x,int n)
{
	static double p=1,f=1;
	double r;
	if(n==0)
		return 1;
	else
	{
		r=e(x,n-1);
		p*=x;
		f*=n;
		return r+p/f;
	}
}
int main()
{
	int x,n;
	cout<<"Enter x and n for exponent and number of times "<<endl;
	cin>>x>>n;
	cout<<e(x,n);
	return 0;
}
