#include<iostream>
using namespace std;
int main()
{
	int sales[5][12];
	unsigned long int total =0;
	int i,j;
	for(i=1;i<=5;++i)
	{
		cout<<"Enter sales of salesman "<<i<<endl;
		for(j=1;j<=12;++j)
		{
			cout<<"Month "<<j<<endl;
			cin>>sales[i][j];
			total+=sales[i][j];
		}
		cout<<"Total sales of salesman "<<i<<" is Rs. "<<total<<endl;
	}
	return 0;
}
