#include<iostream>
using namespace std;
int main()
{
	float fact(long int );
	int r,n;
	float y;
	cout<<"Enter n and r respectively to calculate nCr"<<endl;
	cin>>n>>r;
	y=(float)fact(n)/(fact(n-r)*fact(r));
	cout<<"The combination is"<<y<<endl;
	return 0;
}
 float fact(long int n)
 {
 	int i;
 	long int factorial=1;
 	for(i=1;i<=n;++i)
 	factorial*=i;
 	return (factorial);
 }
