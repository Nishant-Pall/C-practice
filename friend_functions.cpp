#include<iostream>
using namespace std;
class base
{
private :
int a;
protected:
int b;
public:
int c;
friend void fun();
};
void fun()
{ base m;
m.a=10;
m.b=5;
m.c=50;
cout<<m.a<<endl;
cout<<m.b<<endl;
cout<<m.c<<endl;
}
int main()
{
fun();
return 0;}

