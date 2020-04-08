#include<iostream>
using namespace std;
class your;
class my
{
private:int a=10;
friend your;
};
class your:my
{
public:
my m;
void fun()
{
cout<<m.a<<endl;
}
};
int main()
{
your y;
y.fun();
return 0;
}
