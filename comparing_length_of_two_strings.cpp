#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string1[50],string2[50];
	cout<<"Enter strings \n"<<endl;
	cin.get(string1,50);
	cin.get(string2,50);
	int i,j;
	for(i=0;string1[i]!=0;++i);
	for(j=0;string2[i]!=0;++j);
	if(i==j)
	cout<<"the lengths are same"<<endl;
	else
	cout<<"the lengths differ"<<endl;
	return 0;
}

