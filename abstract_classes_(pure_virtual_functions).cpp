#include<iostream>
using namespace std;
class car
{
public:
virtual void start()=0;
};
class audi:public car
{
public:
void start()
{
cout<<"Audi started"<<endl;
}};
class merc:public car
{
public:
void start()
{
cout<<"mercedes started"<<endl;
}
};
int main()
{
car *c=new audi();
c->start();
c=new merc();
c->start();
return 0;
}

