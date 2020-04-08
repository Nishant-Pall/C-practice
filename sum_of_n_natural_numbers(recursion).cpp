#include<iostream>
using namespace std;
int sum(int n)
{
if(n>0)
return sum(n-1)+n;
else return 0;
}
int main()
{
int x;
cout<<"Enter number of sum of natural numbers till the number:"<<endl;
cin>>x;
cout<<sum(x);
return 0;
}
