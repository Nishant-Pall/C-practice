#include<iostream>
using namespace std;
class complex{
int r,i;
public: complex(int a,int b);
complex(complex&c,int k);
void show()
{cout<<r<<" +i"<<i<<endl;}
};
complex::complex(int a,int b)
{r=a;i=b;}
complex::complex(complex&c,int k)
{r=c.r;i=k;}
int main()
{
int x,y,k;
cout<<"Enter x and y:"<<endl;
cin>>x>>y;
cout<<"First number(before hybrid copy constructor)"<<endl;
complex c2(x,y);
c2.show();
cout<<"Second number(after calling hybrid copy constructor)"<<endl;
k=7;
complex c1(c2,k);
c1.show();
return 0;
}
