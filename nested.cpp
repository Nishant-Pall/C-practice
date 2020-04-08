#include<iostream>
using namespace std;
int main()
{
	int outer,inner;
	for(outer=1;outer<=10;outer+=4)
	{
		for(inner=1;inner<=outer;inner+=2)
		cout<<outer<<""<<inner<<endl;
	}
	return 0;
}
