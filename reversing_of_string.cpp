#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string[3][31],ch;
	int i,j,len,k;
	cout<<"Enter three strings"<<endl;
	for(i=0;i<3;++i)
	cin.getline(string[i],31);
	cout<<"The list of original order is"<<endl;
	for(i=0;i<3;++i)
	cout<<endl<<string[i]<<endl;
	for(i=0;i<3;++i)
	{
		len=strlen(string[i]);
		for(j=0,k=len-1;j<len/2;j++,k--)
		{
			ch=string[i][j];
			string[i][j]=string[i][k];
			string[i][k]=ch;
		}
	}
	cout<<"The reversed order is"<<endl;
	for(i=0;i<3;++i)
	cout<<string[i]<<endl;
	return 0;
}
