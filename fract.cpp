#include<iostream>
using namespace std;
int main()
{
	float (n),(fract);
	cout<<"enter a number:";
	cin>>n;
	cout<<"the integer part is"<<int(n); //type casting
	cout<<"the fractional part is"<<n-int(n);
	return 0;
}
