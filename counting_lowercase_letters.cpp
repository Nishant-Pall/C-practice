#include<iostream>
using namespace std;
int main()
{
	int count=0;
	char ent='\n';
	char ch;
	cout<<"Enter a character"<<endl;
	cin.get(ch);
	while(ch!=ent)
{	
		if(ch>='a'&&ch<='z')
	{
		count++;
	}
	cin.get(ch);
}
	cout<<"The number of lowercase letters are = "<<count<<endl;
	return 0;
}
