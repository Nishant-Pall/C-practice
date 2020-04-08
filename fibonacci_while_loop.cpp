#include<iostream>
using namespace std;
int main()
{
	long int f1,f2,f3,n;
	cout<<"enter how many numbers you want in the series"<<endl;
	cin>>n;
	cout<<"enter first and second term"<<endl;
	cin>>f1>>f2;
	cout<<f1<<endl<<f2<<endl;
	long int c=2;
	while(c<n)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<f3<<endl;
		c++;
	}
	return 0;
}
