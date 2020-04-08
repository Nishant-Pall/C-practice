#include<iostream>
using namespace std;
int fib(int n)
{
if(n<=1)
return n;
else
 return fib(n-2)+fib(n-1);
}
int main()
{
int n;
cout<<"Enter n for number of fibonacci terms"<<endl;
cin>>n;
cout<<fib(n)<<endl;
return 0;
}
