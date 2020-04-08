#include<iostream>
using namespace std;
class basiccar
{
public:
virtual void fun()
{
cout<<"Basic car started"<<endl;
}};
class advancecar:public basiccar
{
public:
void fun()
{
cout<<"Advance car started"<<endl;
}};
int main()
{
basiccar *p=new advancecar();
p->fun();
return 0;
}
