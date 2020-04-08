#include<iostream>
using namespace std;
class xyz
{
int a,b;
public: xyz(int a1,int b1)
{a=a1;b=b1;}
int mul()
{cout<<a*b<<endl;
return 0;}
};
int main()
{
int i,j;
cout<<"Enter first number:"<<endl;
cin>>i;
cout<<"Enter second number:"<<endl;
cin>>j;
xyz C1(i,j);
cout<<"Multiplication is"<<endl;
C1.mul();
return 0;
}
