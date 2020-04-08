#include<iostream>
using namespace std;
int inline greatest(int m1,int m2,int m3);
int main()
{
	int n1,n2,n3,answer;
	cout<<"Enter 3 numbers";
	cin>>n1>>n2>>n3;
	
	cout<<"Greatest number is "<<  greatest(n1,n2,n3);
	return 5;
}
int inline  greatest(int m1,int m2,int m3)
{
	if(m1>m2) return(m1>m3?m1:m3);
	else return(m2>m3?m2:m3);
}
