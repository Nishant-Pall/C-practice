#include<iostream>
using namespace std;
int main()
{
	int i,j,A[3][3],B[3][3];
	cout<<"Enter members of first matrix row wise"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cin>>A[i][j];
		}
	}
	cout<<"Enter members of second matrix row wise"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cin>>B[i][j];
		}
	}
	int flag =0;
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{	if(A[i][j]!=B[i][j])
			{
				flag=1;break;
			}
		}
		if(flag==1) break;
	}
	if(flag!=0)
	cout<<"The matrices are unequal"<<endl;
	else
	cout<<"The matrices are equal"<<endl;
	return 0;
}
