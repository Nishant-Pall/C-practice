#include<iostream>
using namespace std;
int pow(int m,int n)
{
if(n==0)
return 1;
else if(n%2==0)
return pow(m*m,n/2);
else
return m*pow(m*m,(n-1)/2);
}
int main()
{int x,y;
cout<<"Enter number and power"<<endl;
cin>>x>>y;
cout<<pow(x,y);
return 0;
}
