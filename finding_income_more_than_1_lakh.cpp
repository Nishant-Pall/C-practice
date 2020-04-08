#include<iostream>
using namespace std;
int main()
{
	const int size=5;
	float list[size],an_sal;
	int i,count =0;
	for(i=1;i<=size;++i)
	{
		cout<<"Enter salary of employee "<<i<<endl;
		cin>>list[i];
	}
	for(i=0;i<=size;++i)
	{
		an_sal =list[i]*12;
		if(an_sal>100000)
		count++;
	}
	cout<<count<<" number of employees out of "<<size<<" have annual salary more than 1 lakh "<<endl;
	return 0;
}
