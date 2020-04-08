#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[80];
	int i,count =0;
	cout<<"Enter a string(max.80 chars)"<<endl;
	gets(str);
	for(i=0;str[i]!=0;++i)
	{
		if(str[i]== ' ')
		count++;
	}
		cout<<"the number of spaces in it is"<<count<<endl;
		cout<<"the number of character's in it are "<<strlen(str);
		return 0;
}
