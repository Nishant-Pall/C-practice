#include<iostream>
using namespace std;
class small
{
	private:int x,y;
	public:
		void input();
		void output();
	};
	void small::input()
	{
		cout<<"Enter first number:";
		cin>>x;
		cout<<"Enter second number:";
		cin>>y;
	}
	void small::output()
	{
		if(x>y)
		cout<<"Smallest is "<<x<<endl;
		else
		cout<<"Smallest is "<<y<<endl;
	}
	int main()
	{
		small s;
		s.input();
		s.output();
		return 0;
	}
