#include<iostream>
using namespace std;
int main()
{
int A[5]{2,4,6,8,10};
int*p=A;
cout<<*p;
++p;
cout<<*p;
return 0;
}
