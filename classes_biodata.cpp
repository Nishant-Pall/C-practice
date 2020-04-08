#include<iostream>
using namespace std;
class bio
{
private: 
char name;
int roll;
string branch;
public:
void input()
{
cout<<"Enter name"<<endl;
cin>>name;
cout<<"Enter SID"<<endl;
cin>>roll;
cout<<"Enter Branch"<<endl;
cin>>branch;
}
void display()
{
cout<<"Name:"<<name<<endl;
cout<<"SID:"<<roll<<endl;
cout<<"Branch:"<<branch<<endl;
}};
int main()
{int x;
bio b[x];
cout<<"Enter how many students"<<endl;
cin>>x;
for(int i=0;i<x;++i)
{
b[i].input();
}
for(int j=0;j<x;++j)
{
b[j].display();
}
return 0;
}
