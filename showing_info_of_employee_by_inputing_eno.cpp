#include<iostream>
#include<stdio.h>
using namespace std;
struct Addr
{
	int houseno;
	char area[26];
	char city[26];
	char state[26];
};
struct Emp
{
	int empno;
	char name[26];
	char desig[26];
	Addr address;
	float basic;
};
Emp sales_emp[10];
void display(int a);
void enter(void);
int main()
{
	int eno,i;
	char ch;
	enter();
	do
	{
		cout<<"Enter employee no. whose information is to be displayed:"<<endl;
		cin>>eno;
		int flag=0;
		for(i=0;i<10;++i)
		{
			if(sales_emp[i].empno==eno)
			{
				display(i);flag=1;break;}
			}
			if(!flag)
			{
				cout<<"No such employee found!!!"<<endl;
			}
			cout<<"Display more?(y/n)"<<endl;
			cin>>ch;
		}while(ch=='y');
		return 0;
	}
	void enter(void)
	{
	for(int i=0;i<10;++i)
	{
		cout<<"Employee no.:";
		cin>>sales_emp[i].empno;
		cout<<endl<<"Employee name:";
		gets(sales_emp[i].name);
		cout<<endl<<"Employee designation:";
		gets(sales_emp[i].desig);
		cout<<endl<<"Employee Address";
		cout<<endl<<"House no.";
		cin>>sales_emp[i].address.houseno;
		cout<<endl<<"Area";
		gets(sales_emp[i].address.area);
		cout<<endl<<"City";
		gets(sales_emp[i].address.city);
		cout<<endl<<"State";
		gets(sales_emp[i].address.state);
		cout<<endl<<"Basic pay:";
		cin>>sales_emp[i].basic;
		cout<<endl;
	}
	return;
}
void display(int a)
{
	cout<<"Employee Data"<<endl;
	cout<<"Employee number:"<<sales_emp[a].empno;
	cout<<"Name:";
	cout.write(sales_emp[a].name,26);
	cout<<endl<<"Designation";
	cout.write(sales_emp[a].name,26);
	cout<<endl<<"Address:"<<sales_emp[a].address.houseno;
	cout.write(sales_emp[a].address.area,26);
	cout.write(sales_emp[a].address.city,26);
	cout.write(sales_emp[a].address.state,26);
	cout<<endl<<"Basic pay:"<<sales_emp[a].basic;
	cout<<endl;
	return 
	;
}
