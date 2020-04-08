#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter two numbers for division"<<endl;
cin>>a>>b;
try
{
if(b==0)
throw 101;
c=a/b;
cout<<c;
}
catch(int e)
{cout<<"division by zero..error code:"<<e<<endl;
}
return 0;
}
