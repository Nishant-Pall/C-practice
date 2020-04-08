#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,delta;
	float root(int x,int y,int z);
	cout<<"enter value of a,b,c for the equation"<<endl<<"ax^2+bx+c=0"<<endl;
	cin>>a>>b>>c;
	root(a,b,c);
	return 0;
}
float root(int x,int y,int z)
{
	float r1,r2;
	float delta = y*y-4*x*z;
	if(delta<0)
	cout<<"the roots are imaginary"<<endl;
	else if(delta==0)
	{
	r1=r2=(-y)/2*x;
	cout<<"the only root is "<<r1<<endl;
	}
	else if(delta>0)
	{
		r1=(-y+sqrt(delta))/2*x;
		r2=(-y-sqrt(delta))/2*x;
	cout<<"the first root is "<<r1<<endl;	
	cout<<"the second root is "<<r2<<endl;
	return (r1,r2);
	}
}
