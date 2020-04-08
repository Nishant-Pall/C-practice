#include<iostream>
using namespace std;
int main()
{
	float sales[3],avg=0,total=0;
	for(int i=1;i<=3;++i)
	{
		cout<<"enter sales made on day"<<i<<endl;
		cin>>sales[i];
		total+=sales[i];
	}
	avg=total/3;
	cout<<"total sales="<<total<<endl;
	cout<<"avg sales="<<avg<<endl;
	return 0;
}
