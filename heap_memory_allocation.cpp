#include<iostream>
using namespace std;
int main()
{

int*p=new int[5]={1,2,3,4,5};

cout<<*p<<endl;
for(int i=0;i<5;++i)
cout<<p[i]<<endl;

delete []p;
p=NULL;
return 0;
}
