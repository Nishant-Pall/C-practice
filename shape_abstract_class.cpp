#include<iostream>
using namespace std;
class shape
{
public:
virtual float area()=0;
virtual float peri()=0;
};
class rectangle:public shape
{
float length;
float breadth;
public:
rectangle(int l=1,int b=1)
{
if(l>0)
length=l;
else length=0;
if(b>0)
breadth=b;
else breadth=0;
}
float area()
{return(length*breadth);}
float peri()
{return(2*(length+breadth));}
};
class circle:public shape
{
float radius;
public:
circle(int r=0)
{
if(r>0)
radius=r;
else radius=0;
}
float area()
{return(3.14*radius*radius);}
float peri()
{return(2*3.14*radius);}
};
int main()
{
shape *s=new rectangle(5,10);
cout<<"Area of rectangle is:"<<s->area()<<endl;
cout<<"Perimeter of rectangle is:"<<s->peri()<<endl;
s=new circle(7);
cout<<"Area of Circle is:"<<s->area()<<endl;
cout<<"Perimeter of circle is:"<<s->peri()<<endl;
return 0;
}
