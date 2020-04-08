#include<iostream>
using namespace std;
void fun(int n);
void fun2(int n);
int main()
{int x;
cout<<"Enter a number:"<<endl;
cin>>x;
fun(x);
fun2(x);
return 0;
}
void fun(int n)
{if(n>0)
{
cout<<n<<endl;
fun(n-1);
}
}
void fun2(int n)
{if(n>0)
{fun2(n-1);
cout<<n<<endl;
}
}
