 #include<iostream>
 using namespace std;
 int main()
 {
 char str[80];
 cout<<"Enter string"<<endl;
 cin.get(str,80,'$');
 cout<<"The string termination after $ is"<<endl;
 cout<<str<<endl;
 return 0;
 }
