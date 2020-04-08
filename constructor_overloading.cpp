#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		complex(int a)
		{x=a;y=a;}
		complex(int a,int b)
		{x=a;y=b;}
		void add (complex c1,complex c2)
		{ x=c1.x-c2.x;
		y=c1.y-c2.y;}
		void show()
		{cout<<x<<" + i"<<y<<endl;}
};
	int main()
	{
		complex a(3,5);
		complex b(4);
		complex c(0);c.add(a,b);
		a.show();
		b.show();
		cout<<"a - b is:"<<endl;
		c.show();
		return 0;
	}
