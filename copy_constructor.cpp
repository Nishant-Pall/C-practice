#include<iostream>
using namespace std;
class complex {
int r,i;
public: complex(int a,int b)
{r=a;i=b;}
complex(complex&c)
{r=c.r;i=c.i;}
void show()
{cout<<r<<" + i"<<i<<endl;}
};
int main()
{
int x,y;
cout<<"Enter real part "<<endl;
cin>>x;
cout<<"Enter imaginary part"<<endl;
cin>>y;
complex c1(x,y);
complex c2(c1);
cout<<"First number is:";
c1.show();
cout<<endl<<"Second number is:";
c2.show();
return 0;
} 
