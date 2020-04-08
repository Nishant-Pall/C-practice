#include<iostream>
using namespace std;
int main()
{
	int i,j;
	float grades[i][j],avg,sum;
	for(i=1;i<=4;++i)
	{
		sum=avg=0;
		cout<<"Enter marks of student "<<i<<endl;
		for(j=1;j<=3;++j)
		{
			cin>>grades[i][j];
			sum+=grades[i][j];
		}
		avg=sum/3;
		if(avg<45.0)
		cout<<"Grade is D"<<endl;
		else if(avg<60.0)
		cout<<"Grade is C"<<endl;
		else if(avg<75.0)
		cout<<"Grade is B"<<endl;
		else cout<<"Grade is A"<<endl;
	}
	for(i=1;i<=4;++i)
	{
		cout<<"The total marks of student "<<i<<" is ";
		cout<<grades[i][1]+grades[i][2]+grades[i][3]<<endl;
	}
	return 0;
}		
