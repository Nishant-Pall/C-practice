#include<iostream>
using namespace std;
int main()
{
	int n,factorial=1;
	cout<<"enter the number whose factorial you want"<<endl;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		factorial*=i;
	}
	cout<<"the factorial is:"<<factorial<<endl;
	return 0;
}
