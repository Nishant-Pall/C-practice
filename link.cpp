#include<iostream>
using namespace std;
int main()
{ 
cout<<"\a\a\a";
char user[20];
cout<<"enter your name ";
cin>>user;
cout<<"hello"<<user;
int value1,value2,value3,dividend;
cout<<"enter first value:";
cin>>value1;
cout<<"enter second value:";
cin>>value2;
dividend=value1/value2;
cout<<"the result gives us: "<<dividend;
cout<<"enter third value ";
cin>>value3;
cout<<"final answer is "<<dividend+value3;
return 0;
}
