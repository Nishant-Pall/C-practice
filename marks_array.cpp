#include<iostream>
using namespace std;
int main()
{
	int i;
	const int size=10;
float marks[size];
for(i=0;i<10;++i)
{
	cout<<"enter marks of student"<<i+1<<endl;
	cin>>marks[i];
}
cout<<endl;
for(i=0;i<10;++i)

	cout<<"marks["<<i+1<<"]="<<marks[i]<<endl;
	return 0;

}
