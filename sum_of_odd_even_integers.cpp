#include<iostream>
using namespace std;
int main()
{
	int n,sum_odd,sum_even,ctr=1;
	cout<<"enter the number till when you need the sum of odd and even integers"<<endl;
	cin>>n;
	while(ctr<=n)
	{
		if(ctr%2==0)
		sum_even+=ctr;
		else
		sum_odd+=ctr;
		ctr++;
	}
	cout<<endl<<"the sum of even integers is "<<sum_even<<endl;
	cout<<endl<<"the sum of odd integers is "<<sum_odd<<endl;
	return 0 ;
}
	
