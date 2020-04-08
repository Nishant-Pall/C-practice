#include<iostream>
#include<string.h>
using namespace std;
int main()
{	
	char string[81];
	cout<<"Enter string max 80 characters:"<<endl;
	cin.getline(string,81);
	int x1=strlen(string);
	for(int i=0;string[i]!='\0';++i)
	{
		if(string[i]==' ')
		{
			string[i]='-';
		}
	}
	cout<<"The changed string is:"<<endl;
	cout.write(string,x1);
	return 0;
}
