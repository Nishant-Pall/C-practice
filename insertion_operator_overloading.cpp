#include<iostream>
using namespace std;
class complex
{
int real;
int image;
public:
complex(int r=0,int i=0)
{
real=r;
image=i;
}
 friend ostream & operator<<(ostream &o,complex &c);
 };
ostream & operator<<(ostream &o,complex &c)
{
cout<<c.real<<" + i"<<c.image<<endl;
return o;
}
int main()
{
complex c1(5,3);
cout<<c1;
return 0;
}
