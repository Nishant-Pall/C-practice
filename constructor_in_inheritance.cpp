#include<iostream>
using namespace std;
class base
{
public:
base()
{cout<<"default of base"<<endl;
}
base(int x)
{
cout<<"param of base"<<x<<endl;
}
};
class derived:public base
{
public:
derived()
{cout<<"default of dervied"<<endl;
}
derived(int a,int x):base(x)
{
cout<<"param of derived"<<a<<endl;
}
};
int main()
{derived d(10,5);
return 0;
}
