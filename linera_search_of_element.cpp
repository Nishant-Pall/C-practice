#include<iostream>
using namespace std;
int main()
{
int A[20],size,i,num,flag=0,pos;
cout<<"Enter how many entries you want "<<endl;
cin>>size;
for(i=0;i<size;++i)
	cin>>A[i];
cout<<"Enter the number you want to find"<<endl;
cin>>num;
for(i=0;i<size;++i)
{	if(A[i]==num)
	{
	flag=1;
	pos=i+1;
	break;
	}}
if(flag==0)
cout<<"No entries found in the array"<<endl;
else 
cout<<"Entry found at position "<<pos<<endl;
return 0;
}
