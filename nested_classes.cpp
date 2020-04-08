#include<iostream>
using namespace std;
class outer
{
public:
 void fun()
{i.display();}
class inner
{
public:
void display()
{cout<<"display of inner class"<<endl;
}
};inner i;
};
int main()
{outer o;
o.fun();
return 0;
}
