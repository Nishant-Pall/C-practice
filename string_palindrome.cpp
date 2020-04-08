#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int x,i,j,flag=1;
	char string[81];
	cout<<"Enter any string(max 80 characters):";
	cin.getline(string,81);
	for(x=0;string[x]!=0;++x);
	for(i=0,j=x-1;i<x/2;i++,j--)
	{
		if(string[i]!=string[j])
		{
		flag=0;
		break;
		}
	}
	if(flag!=0)
	cout<<"The string is palindrome"<<endl;
	else
	cout<<"The string is not palindrome"<<endl;
	return 0;
}
