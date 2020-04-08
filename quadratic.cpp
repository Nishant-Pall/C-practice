#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float root1,root2,a,b,c,delta;
	cout<<"enter a,b,c for the equation ax^2+bx+c=0"<<endl;
	cin>>a>>b>>c;
	if(!a)
	cout<<"a cannot be zero";
	else
	{
	delta = b*b-4*a*c;
	if (delta>0)
	{
	root1= (-b+sqrt(delta))/2*a;
	root2=(-b-sqrt(delta))/2*a;
	cout<<"the roots of the equation are"<<"\n";
	cout<<"Root 1 :"<<root1
	<<"Root 2 :"<<root2;}

else if (delta==0)
{
root1=(-b)/2*a;
cout<<"the root is"<<"\n";
cout<<root1;
}
else

	cout<<"the roots are imaginary";
}
return 0;
}

