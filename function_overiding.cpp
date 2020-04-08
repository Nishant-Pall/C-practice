#include<iostream>
using namespace std;
class parent 
{
public:
void display()
{
cout<<"Display of parent";
}};
class child:public parent
{
public:void display()
{
cout<<"Display of child";
}};
int main()
{
parent p;
child c;
p.display();
c.display();
return 0;
}
