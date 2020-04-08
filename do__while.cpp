#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	int sum=0,i=1;
	do
	{
		sum=sum+i;
		i=i+2;
	}
	while(i<=n);
	cout<<"1+3+-----"<<n<<" ="<<sum;
	return 0;
}
