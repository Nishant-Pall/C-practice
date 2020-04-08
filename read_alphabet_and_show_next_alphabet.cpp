#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char ch,Next;
	cout<<"Enter  any character:";
	ch=getchar();
	Next=ch+1;
	cout<<endl<<"The next character is:";
	putchar(Next);
	return 0;
}
