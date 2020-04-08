#include<iostream>
#include<fstream>
using namespace std;
class student
{
 public:
 string name;
 int roll;
 string branch;
friend ofstream & operator<<(ofstream &ofs,student &s);
friend ifstream & operator>>(ifstream &ifs,student &s);
};
 ofstream & operator<<(ofstream &ofs,student &s)
 {
 ofs<<s.name<<endl;
 ofs<<s.roll<<endl;
 ofs<<s.branch<<endl;
 return ofs;
 };
 ifstream & operator>>(ifstream &ifs,student &s)
 { ifs>>s.name>>s.roll>>s.branch;
 return ifs;
 };
 int main()
 {
 student s1;
 s1.name="Nishant";s1.roll=18;s1.branch="Mechanical";
ofstream ofs("student.txt");
ofs<<s1;
ofs.close();
ifstream ifs("Student.txt",ios::app);
ifs>>s1;
cout<<"Name:"<<s1.name<<endl;
cout<<"Roll no.:"<<s1.roll<<endl;
cout<<"Branch :"<<s1.branch<<endl;
ifs.close();
return 0;
}
