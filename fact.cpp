#include<iostream>
using namespace std;
int main()
{
	int i,num,fact=1;
 cout<<"enter a no."<<endl;
 cin>>num;
 i=num;
 while(num)
 {
 	fact*=num;
 	--num;
 }
 cout<<"the factorial is"<<fact;
 return 0;
}
