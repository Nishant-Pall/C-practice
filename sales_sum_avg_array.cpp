#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int size=3;
	int i;
	float sales[size],avg=0,sum=0;
	for(i=1;i<=size;++i)
	{
		cout<<"Enter sales made on day"<<i<<endl;
		cin>>sales[i];
		sum+=sales[i];
	}
	avg=sum/3;
	cout<<"Total sales are :"<<sum<<endl;
	cout.setf(ios::fixed);
	cout<<"The average sale made per day is :"<<setprecision(3)<<avg<<endl;
	return 0;
}
