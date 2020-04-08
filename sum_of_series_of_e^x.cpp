#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,sum=1;
	float x;
	long int fact(long int);
	long int i;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"Enter value of x"<<endl;
	cin>>x;
	for(i=1;i<=n;++i)
	{
		sum+=pow(x,i)/fact(i);
	}
	cout<<"The sum of the series is"<<sum<<endl;
	return 0;
}
 	long int fact(long int)
{
	int n,temp=1;
	long int k;
	for(k=1;k<=n;++k)
	temp*=k;
	return (temp);
}
