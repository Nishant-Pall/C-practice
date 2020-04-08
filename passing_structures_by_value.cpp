#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	int inches;
};
int main()
{
	Distance length1,length2;
	void prnsum(Distance l1,Distance l2);
	cout<<"Enter Length 1:"<<endl;
	cout<<"Feet:";
	cin>>length1.feet;
	cout<<endl<<"Inches:";
	cin>>length1.inches;
	cout<<endl<<"Enter Length 2:"<<endl;
	cout<<"Feet:";
	cin>>length2.feet;
	cout<<endl<<"Inches:";
	cin>>length2.inches;
	prnsum (length1,length2);
	return 0;
}
prnsum (Distance l1,Distance l2)
{
	Distance l3;
	l3.feet=l1.feet+l2.feet+(l1.inches+l2.inches)/12; 
	l3.inches=(l1.inches+l2.inches)%12;
	cout<<endl<<"Total Feet "<<l3.feet<<endl; 
	cout<<"Total Inches "<<l3.inches<<endl;
}
