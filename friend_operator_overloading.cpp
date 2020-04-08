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
void getdata(int r=0,int i=0)
{
cout<<"Enter real and image part"<<endl;
cin>>r>>i;
real=r;
image=i;
}
void display()
{
cout<<real<<" + i"<<image<<endl;
}
friend complex operator+(complex c1,complex c2)
{
complex t;
t.real=c1.real+c2.real;
t.image=c1.image+c2.image;
return t;
} };
int main()
{
complex c1,
c2,c3;
c1.getdata();c2.getdata();
c3=c1+c2;
c3.display();
return 0;
}
