#include<iostream>
using namespace std;
class bio
{ int rollno;
  string name;
  int physics;
  int chemistry;
  int mathematics;
  public:
  bio(int r,string n,int p,int c,int m)
  { int rollno=r;
  string name =n;
  int physics=p;
  int chemistry=c;
  int mathematics=m;
  }
  int total();
  void grade();
  };
  int bio::total()
  { 
   return (physics+chemistry+mathematics);
  }
  void bio::grade()
  { float avg=total()/3;
   if(avg>=60)
  cout<<"Grade is A"<<endl;
  else if(avg<60&&avg>=40)
  cout<<"Grade is B"<<endl;
  else cout<<"Grade is C"<<endl;
  } 
  int main()
  { int r,p,c,m;
  	string n;
  	cout<<"Enter roll number:";
  	cin>>r;
  	cout<<"Enter name:";
  	cin>>n;
  	cout<<"Enter PCM marks respectively:"<<endl;
  	cin>>p>>c>>m;
  	bio b(r,n,p,c,m);
  	b.total();
  	b.grade();
  	return 0;
  	}
  

