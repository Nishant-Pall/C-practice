#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v={10,20,30,40};
v.push_back(50);
v.push_back(60);
vector<int>::iterator itr;
for(itr=v.begin();itr!=v.end();++itr)
{cout<<*itr<<endl;}
return 0;}
