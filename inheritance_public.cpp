#include<iostream>
using namespace std;
class B
{
private :int x;
protected: int y;
public:int z;
void getdata();
void showdata();
};
class D:public B
{ private:int k;
public:void getk();
void output();};
void B::getdata()
{cout<<"Enter first no.:";cin>>x;
cout<<"Enter second no.:";cin>>y;
cout<<"Enter third no.:";cin>>z;
}
void B::showdata()
{
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
cout<<"z="<<z<<endl;
}
void D::getk()
{cout<<"Enter K:";cin>>k;}
void D::output()
{int s=y+z+k;
cout<<"y+z+k= "<<s<<endl;}
int main()
{
D d1;
d1.getdata();
d1.getk();
d1.showdata();
d1.output();
return 0;
}
