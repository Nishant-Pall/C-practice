#include<iostream>
using namespace std;
int main()
{
int n,r,sum=0;
cout<<"Enter number to check:"<<endl;
cin>>n;
int m=n;
while(n>0)
{
r=n%10;
n/=10;
sum+=r*r*r;
}
if(sum==m)
cout<<"Number is armstrong"<<endl;
else cout<<"Number is not armstrong"<<endl;
return 0;
}
