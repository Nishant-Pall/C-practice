#include<iostream>
using namespace std;
int main()
{int n,sum=0;
cout<<"Enter the number:"<<endl;
cin>>n;
for(int i=1;i<=n;++i)
{
if(n%i==0)
{ sum+=i;}
}
if(2*n==sum)
cout<<"The number is perfect"<<endl;
else
cout<<"The number is not perfect"<<endl;
return 0;
}

