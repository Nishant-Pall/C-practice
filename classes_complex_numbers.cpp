#include<iostream>
using namespace std;
class complex{
	float real,image;
	public:
		void input();
		void output();
	};
	void complex::input()
	{
		cout<<"Enter real part:"<<endl;
		cin>>real;
		cout<<endl<<"Enter imaginary part:"<<endl;
		cin>>image;
	}
	void complex::output()
	{
		cout<<"Complex number is:"<<endl;
		cout<<real<<"+i"<<image<<endl;
	}
	int main()
	{
		complex c1,c2;
		cout<<"Enter first complex number:"<<endl;
		c1.input();
		cout<<"Enter second complex number:"<<endl;
		c2.input();
		cout<<"The first number is"<<endl;
		c1.output();
		cout<<"The second number is"<<endl;
		c2.output();
		return 0;
	}
