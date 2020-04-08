#include<iostream>
using namespace std;
int main()
{
	char line[81];
	int vow =0;
	cout<<"Enter text(max 80 characters):"<<endl;
	cin.getline(line,81);
	for(int i =0;line[i]!='\0';++i)
	{
		switch(line[i])
		{	
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			vow++;
		}
	}
	cout<<"The number of vowels in the text are:"<<vow<<endl;
	return 0;
} 

	
