#include<iostream>
using namespace std;
class complex 
{
int real;
int image;
public:
complex(int r=0,int i=0)
{ real =r; image=i;
}
void display()
{cout<<real<<" + i"<<image;
}
complex operator+(complex c)
{
complex temp;
temp.real=real+c.real;
temp.image=image+c.image;
return temp;
}
};
int main()
{
complex c1(3,5),c2(5,3),c3;
c3=c2+c1;
c3.display();
return 0;
}
