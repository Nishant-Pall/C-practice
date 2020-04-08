#include<iostream>
using namespace std;
int main()
{
	int num,fact;
 cout<<"enter a no."<<endl;
 cin>>num;
 while(num)
 {
 	fact*=num;
 	--num;
 }
 cout<<"the factorial is"<<fact;
 return 0;
}