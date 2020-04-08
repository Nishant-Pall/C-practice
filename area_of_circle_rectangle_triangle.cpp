#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float area,radius,length,breadth,a,b,c,s;
	int choice;
	cout<<"Area Menu"<<endl<<"1.Circle"<<endl<<"2.Rectangle"<<"3.Triangle"<<endl<<"Enter your choice:";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:cout<<"Enter Radius of the Circle"<<endl;
		       cin>>radius;
		       area=3.14*radius*radius;
		       cout<<endl<<"The area of the Circle is:"<<area<<endl;
		       break;
		case 2:cout<<"Enter Length and Breadth of the Rectangle"<<endl;
			   cin>>length>>breadth;
		       area=length*breadth;
		       cout<<endl<<"The area of the Rectangle is:"<<area<<endl;
			   break;
		case 3:cout<<"Enter three sides of the Triangle"<<endl;
		       cin>>a>>b>>c;
			   s=(a+b+c)/2;
			   area=sqrt(s*(s-a)*(s-b)*(s-c));
			   cout<<endl<<"The are of the Triangle is:"<<area;
			   break;
	   default:cout<<"Wrong Choice!!!!!";
	           break;
		}
		return 0;
	}
