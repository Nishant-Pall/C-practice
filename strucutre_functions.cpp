#include<iostream>
using namespace std;
void initialize(struct rect *r,int l,int b);
int area(struct rect r);
void changelength(struct rect *r,int l);
struct rect
{
int length;
int breadth;
};
int main()
{
struct rect r;
initialize(&r,10,5);
cout<<area(r)<<endl;
changelength(&r,20);
cout<<area(r);
return 0;
}
void initialize(struct rect *r,int l,int b)
{
r->length=l;
r->breadth=b;
}
int area(struct rect r)
{
return r.breadth*r.length;
}
void changelength(struct rect *r,int l)
{
r->length=l;
}
