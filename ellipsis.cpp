#include<iostream>
#include<stdlib.h>
using namespace std;
int sum(int n,...)
{
va_list list;
va_start(list,n);
int s=0;
for(int i=0;i<n;++i)
s+=va_arg(list,int);
va_end(list);
return s;
}
int main()
{
cout<<sum(3,10,20,30)<<endl;
cout<<sum(7,12,34,5,3,2,2,9)<<endl;
return 0;
}
