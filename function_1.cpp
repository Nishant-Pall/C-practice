#include<iostream>
using namespace std;
float cube(float);   //function cube's declaration
int main()
{
	float num;
	cout<<"enter a number:";
	cin>>num;
	cube(num);
	cout<<endl<<"the cube of "<<num<<" is :"<<cube(num)<<endl; //function calling
	return 0;
}
float cube(float a)   //function cube's definition
{
	return a*a*a;
}
