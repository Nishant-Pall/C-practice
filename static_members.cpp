#include<iostream>
using namespace std;
class test
{
private:
int a;
int b;
public:
static int count;
test()
{
a=10;
b=10;
count++;
}
};
int test::count=0;
int main()
{test x;
cout<<x.count<<endl;
test y;
cout<<y.count<<endl;
return 0;
}
