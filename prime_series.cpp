#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter how many terms you want in the series"<<endl;
	cin>>n;
	for(int i=2;i<100;++i)
	{
	for(int j=2;j<1;j++)
	{
		if(i%j==0)
		break;
		else if(i==j+1)
		cout<<i<<endl;
	}
	return 0;
}
}
