#include<iostream>
using namespace std;
class sample
{
int a,b;
public: sample()
{cout<<"Enter a:"<<endl;
cin>>a;
cout<<"Enter b:"<<endl;
cin>>b;
}
int add()
{
return(a+b);
}
};
int main()
{
sample s;
cout<<s.add()<<endl;
return 0;
}
