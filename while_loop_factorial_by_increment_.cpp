#include<iostream>
using namespace std;
int main()
{
	int i=1,num,fact=1;
	cout<<"enter the number whose factorial you want"<<endl;
	cin>>num;
	while(i<=num)
	{
		fact*=i;
		++i;
	}
	cout<<"the factorial is:"<<fact<<endl;
	return 0;
}
		
