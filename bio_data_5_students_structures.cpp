#include<iostream>
#include<string.h>
using namespace std;
struct bio
{
	char name[80];
	int roll_no;
	char branch[20];
	int semester;
	float subject_marks[10];
	float total_marks;
};
int main()
{
bio student[5];
cout<<"Enter bio data of 5 students:"<<endl;
for(int i=0;i<5;++i)
{
	cout<<"Enter bio data of student "<<i+1<<" student:"<<endl;
	cout<<"Enter name"<<endl;
	cin.getline(student[i].name,80);
	cout<<"Enter roll no."<<endl;
	cin>>student[i].roll_no;
	cout<<"Enter Branch:"<<endl;
	cin.getline(student[i].branch,20);
	cout<<"Enter semester:"<<endl;
	cin>>student[i].semester;
	cout<<"Enter marks of five students:"<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"Enter marks of "<<j+1<<" subject:"<<endl;
		cin>>student[i].subject_marks[j];
	}
	student[i].total_marks =
	student[i].subject_marks[0]+
		student[i].subject_marks[1]+
			student[i].subject_marks[2]+
				student[i].subject_marks[3]+
					student[i].subject_marks[4];
	}
cout<<"Bio-data of students who get more than 400 marks:"<<endl;
for(int i=0;i<5;++i)
{
	if((student[i].total_marks)>400)
	{
		cout<<"BIO-DATA....."<<endl;
		cout<<"Name:"<<student[i].name<<endl;
		cout<<"Roll no. "<<student[i].roll_no;
		cout<<"Branch:"<<student[i].branch;
		cout<<"Semester:"<<student[i].semester;
		cout<<"The marks of five subjects are:"<<endl;
		for(int j=0;j<5;++j)
		cout<<student[i].subject_marks[j]<<endl;
		cout<<"Total marks:"<<student[i].total_marks;
		cout<<endl;
	}
}
return 0;
}
