#include<iostream>
using namespace std;
int main()
{
	int i,sum,n;
	cout<<"how many numbers you want..?"<<endl;
	cin>>n;
	for(i=0,sum=0;i<=n;sum+=i,++i)
	{
		cout<<endl<<i;
    }
	cout<<endl<<"their sum is :"<<sum;
	return 0;
}
