#include<iostream>
using namespace std;
bool isfour(string pin)
{
bool status=true;
if(pin.length()!=4)
status=false;
return status;
}
int main()
{
string pin;
cout<<"Enter pin"<<endl;
cin>>pin;
if(isfour(pin)==1)
cout<<"pin accepted"<<endl;
else cout<<"Access denied"<<endl;
return 0;
}
