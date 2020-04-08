#include<iostream>
using namespace std;
class car
{
public:virtual void start()
{
cout<<"Car started"<<endl;
}
virtual void stop()
{
cout<<"Car stopped"<<endl;
}
};
class Audi:public car
{
public:void start()
{
cout<<"Audi started"<<endl;
}
void stop()
{
cout<<"Audi stopped"<<endl;
}
};
class Benz:public car
{
public:void start()
{
cout<<"Benz started"<<endl;
}
void stop()
{
cout<<"Benz stopped"<<endl;
}
};
int main()
{
car *c=new Audi;
c->start();
c->stop();
c=new Benz;
c->start();
c->stop();
return 0;
}
