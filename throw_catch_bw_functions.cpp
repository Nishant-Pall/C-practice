#include<iostream>
using namespace std;
int div(int x,int y);
int main()
{
int a=10,b=0,c;
try
{ c=div(a,b);
cout<<c;
}
catch(int e)
{
cout<<"Divison by zero error code:"<<e;
}
return 0;
}
int div(int x,int y)
{
if(y==0)
throw 101;
return(x/y);
}
