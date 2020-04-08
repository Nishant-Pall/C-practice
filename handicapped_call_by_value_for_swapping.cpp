#include<iostream>
using namespace std;
int main()
{
	int a,b;
	void swap(int a,int b);
	a=7;
	b=4;
	cout<<"The original values are:"<<a<<"and"<<b<<endl;
	swap(a,b);
	cout<<"The values after swap are:"<<a<<"and"<<b<<endl;
	return 0;
}
void swap(int x,int y)
{
	int temp =x;
	x=y;
	y=temp;
	cout<<"swapped values are:"<<x<<"and"<<y<<endl;
}
