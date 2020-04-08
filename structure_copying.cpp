#include<iostream>
using namespace std;
struct chip
{
	int chip_number;
	float cost;
};
int main()
{
	chip chip1={486,2000};
	chip chip2;
	chip2=chip1;
	cout<<"The copied structure is "<<endl;
	cout<<chip2.chip_number<<endl;
	cout<<chip2.cost<<endl;
	return 0;
}
	
