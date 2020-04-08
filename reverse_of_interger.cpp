#include<iostream>
using namespace std;
int main()
{
int x;
int reverse(int x),remainder,reversed=0;
cout<<"Enter any integer"<<endl;
cin>>x;
cout<<"the reverse of the integer is "<<reverse(x)<<endl;
return 0;
}
int reverse(int x)
{ int remainder,reversed=0;
	while(x!=0)
	{
		remainder=x%10;
		reversed=reversed*10+remainder;
		x=x/10;
	}
		return (reversed);
}
