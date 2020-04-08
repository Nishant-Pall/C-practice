#include<iostream>
using namespace std;
class rect
{
private:
int length;
int breadth;
public:
rect(int l,int b)
{
length=l;
breadth=b;
}
int area()
{return length*breadth;}
};
int main()
{unique_ptr<rect>p1(new rect(10,5));
cout<<p1->area();
shared_ptr<rect>p2;
p2=p1;
cout<<p2->area();
cout<<ptr.use_count()<<endl;
return 0;
}
