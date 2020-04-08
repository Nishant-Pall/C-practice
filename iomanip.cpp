#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
float x,answer,d;
cout<<"enter a value:";
cin>>x;
d=sin(1/x);
cout.setf(ios::fixed);
cout<<"the answer is"<<setprecision(4)<<d;
return 0;
}
