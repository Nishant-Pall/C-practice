#include<iostream>
using namespace std;
int main()
{
	int choice;
	float c,f;
	cout<<"choice 1: f to c"<<endl;
	cout<<"choice 2: c to f"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"enter temperature:"<<endl;
		cin>>f;
		cout<<"the temperature in celsius is:"<<(f-32)/1.8<<endl;
		if(f= -40)
		cout<<"the answer will be same lol";
		else ;
		break;
		case 2: cout<<"enter temperature:"<<endl;
		cin>>c;
		cout<<"the temperature in fahrenheit is:"<<(c*1.8)+32<<endl;
		if(c= -40)
		cout<<"the answer will be same lol";
		else ;
		break;
		default: cout<<"wrong choice";
			break ;
		}
		return 0;
	}
