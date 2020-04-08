#include<iostream>
using namespace std;
long int n,f1,f2,f3;
int main()
{
	long int fib(int f3);
	cout<<"Enter number of terms you want in fibonacci series"<<endl;
	cin>>n;
	cout<<"Enter first and second term "<<endl;
	cin>>f1>>f2;
	cout<<"The series is "<<endl;
	cout<<f1<<endl<<f2<<endl;
	fib(f3);
	return 0;
}
long int fib(int f3)
{
	int c=2;
	while(c<n)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		cout<<f3<<endl;
		c++;
	}
	return(f3);
}
		
