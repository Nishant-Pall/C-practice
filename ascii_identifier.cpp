#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout<<"\n enter any character";
 cin>>ch;
 if(ch>=48&&ch<=57)
 {
 	cout<<"\n"<<"you've entered a digit";
 }
 else if(ch>=65&&ch<=90)
 {
 	cout<<"\n"<<"you've entered an upper case letter";
 }
 else if(ch>=97&&ch<=122)
 {
 	cout<<"\n"<<"you've entered a lower case letter";
 }
 else
 {
 	cout<<"you've entered a special character";
 }
 return 0;
}
