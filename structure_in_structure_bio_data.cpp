#include<iostream>
using namespace std;
int main()
{
	struct date{
		int day;
		char month[20];
		int year;
	};
	struct bio{
		char name[80];
		date dob;
	};
	bio student;
cout<<"Enter name of student "<<endl;
cin>>student.name;
cout<<"Enter date of birth"<<endl;
cout<<"Enter day"<<endl;
cin>>student.dob.day;
cout<<"Enter month"<<endl;
cin>>student.dob.month;
cout<<"Enter year"<<endl;
cin>>student.dob.year;
cout<<"The BIO-DATA is"<<endl;
cout<<"The name is "<<student.name<<endl;
cout<<"The date of birth is "<<endl;
cout<<student.dob.day<<"/" <<student.dob.month<<"/" <<student.dob.year;
return 0;
}
