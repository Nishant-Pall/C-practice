#include<iostream>
using namespace std;
class parent 
{
public: void fun()
{
cout<<"Fun of parent"<<endl;
}};
class child:public parent{

public: void fun()
{
cout<<"Fun of child"<<endl;
}};
int main()
{
parent *p=new child();
p->fun();
return 0;
}
