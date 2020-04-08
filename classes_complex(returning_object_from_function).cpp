#include<iostream>
using namespace std;
class complex
{
float realp,imagep;
 public: void getdata();
 complex sum(complex c1);
 void output();
 };
void complex::getdata()
 {
 cout<<"Enter real part"<<endl;
 cin>>realp;
 cout<<endl<<"Enter imaginary part"<<endl;
 cin>>imagep;
 }
complex complex::sum(complex c1)
 {
 complex temp;
 temp.realp=c1.realp+realp;
 temp.imagep=c1.imagep+imagep;
 return(temp);
 }
 void complex::output()
 {cout<<realp<<" + i"<<imagep;}
 int main()
 {
  complex x,y,z;
  cout<<"Enter first complex no."<<endl;
  x.getdata();
  cout<<"Enter second complex no."<<endl;
  y.getdata();
  z=y.sum(x);
  cout<<"First number:"<<endl;
  x.output();
  cout<<"Second number:"<<endl;
  y.output();
  cout<<"Sum of two numbers:"<<endl;
  z.output();
  return 0;
  } 
