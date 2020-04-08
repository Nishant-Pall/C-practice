#include<iostream>
#include<cmath>
#include<process.h>
using namespace std;
int main()
{
	char ch,ch1;
	float l,b,area,perimeter,diagonal;
	cout<<endl<<"Rectangle Menu";
	cout<<"\n 1.Area";
	cout<<"\n 2.Perimeter";
	cout<<"\n 3.Diagonal";
	cout<<"\n 4.Exit"<<endl;
	cout<<"Enter your Choice";
	do 
	{
		cin>>ch;
		if(ch=='1'||ch=='2'||ch=='3')
		{
			cout<<"Enter length and breadth:";
			cin>>l>>b;
		}
		switch(ch)
		{
			case '1': area=l*b;
			       cout<<"Area = "<<area<<endl;
			       break;
			case '2': perimeter=2*(l+b);
			       cout<<"Perimeter = "<<perimeter<<endl;
			       break;
			case '3': diagonal = sqrt(l*l+b*b);
			       cout<<"Diagonal ="<<diagonal<<endl;
				   break;
			case '4': cout<<"Breaking"<<endl;
					 break;
				   exit(0);
		    default: cout<<"Wrong Choice !!!"<<endl<<"Enter a Valid One"<<endl;
			   	    break;
		}
		cout<<endl<<"Want to know more..?(y/n)"<<endl;
		cin>>ch1;
		if(ch1=='y'||ch1=='Y')
		cout<<"Again enter choice(1-4)"<<endl;
	}
	while(ch1=='y'||ch1=='Y');
	return 0;
}
	
