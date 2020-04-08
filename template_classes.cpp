#include<iostream>
using namespace std;
template<class t>
class arith
{
int a;
int b;
public:
arith( t a,t b);
t add();
t sub();
};
template<class t>
arith<t>::arith( t a,t b)
{ this->a=a;
this->b=b;
}
template<class t>
t arith<t>::add()
{t c;
c=a+b;
return c;
}
template<class t>
t arith<t>::sub()
{
t c;
c=a-b;
return c;
}
int main()
{
arith<int> ar(10,5);
cout<<ar.add()<<endl;
cout<<ar.sub()<<endl;
return 0;
}

