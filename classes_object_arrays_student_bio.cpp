#include<iostream>
#include<string.h>
using namespace std;
class bio
{
	private: char name[80];
	char addr[80];
	int rollno ;
	public:
		void input();
		void output();
};
inline void bio::input()
{
	cout<<"Enter name:";
	cin.getline(name,80);
	cout<<endl<<"Enter address:";
	cin.getline(addr,80); 
	cout<<endl<<"Enter roll number:";
	cin>>rollno;
}
inline void bio::output()
{
	cout<<"Name:";
	cout.write(name,80);
	cout<<endl<<"Address:";
	cout.write(addr,80);
	cout<<"Roll Number:"<<rollno;
}
int main()
{
	bio a[3];
	int i;
	for(i=0;i<3;++i)
	{
		cout<<"Enter bio of student "<<i+1<<endl;
		a[i].input();
	}
	for(i=0;i<3;++i)
	{
		cout<<"Bio of "<<i+1<<" student is:"<<endl;
		a[i].output();
	}
	return 0;
}
