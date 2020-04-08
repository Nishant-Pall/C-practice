#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	class student
	{
		private : char name[80];
				  int age;
				  int rollno;
		protected:int semester;
		public:
			void getdata();
			void showdata();
		};
			void student::getdata()
			{
				cout<<"Enter name:";
				cin.getline(name,80);
				cout<<endl<<"Enter age:";
				cin>>age;
				cout<<endl<<"Enter roll number:";
				cin>>rollno;
				cout<<endl<<"Enter semester:";
				cin>>semester;
			}
			void student::showdata()
			{
				cout<<"Name:";
				cout.write(name,80);
				cout<<endl<<"Age:"<<age<<endl;
				cout<<"Roll number:"<<rollno<<endl;
				cout<<"Semester:"<<semester<<endl;
			}
return 0;
}
