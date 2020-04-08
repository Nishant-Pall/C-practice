#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string1[50],string2[50];
	int i,j;
	cout<<"Enter strings"<<endl;
	cin>>string1;
	cin>>string2;
	int m=strlen(string1);
	int n=strlen(string2);
	for(i=0;i<=n-m;++i)
	{
		for(j=0;j<m;++j)
		if(string2[i=j]!=string1[j])
		break;
	}
	if(j==m)
	cout<<"string m is substring of n"<<endl;
	else
	cout<<"not a substring"<<endl;
	return 0;
}
	
