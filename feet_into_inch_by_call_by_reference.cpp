#include<iostream>
#include<process.h>
using namespace std;
int main()
{
	void convert(float &,char &,char );
	float distance;
	char choice,type='F';
	cout<<"Enter distance in feet:"<<endl;
	cin>>distance;
	cout<<"You want distance in feet or inches(F/I)"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 'F': convert(distance,type,'F');
		 		  break;
		case 'I': convert(distance,type,'I');
		 		  break;
		default : cout<<endl<<"You have entered wrong choice !!";
		          exit(0);
 	}
 		cout<<endl<<"Distance = "<<distance<<" "<<type<<endl;
return 0;
}
void convert(float & d,char & t,char ch)
{
switch (ch)
{
	case 'F':if(t=='I')
	         {
	         	d=d/12;
	         	t='F';
	         }
	         break ;
	case 'I':if(t=='F')
	 		{
	 			d=d*12;
	 			t='I';
	 		}
	 		break;
}
return ;
}
