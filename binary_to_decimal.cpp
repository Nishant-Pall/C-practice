#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int bit,bin,dec=0,base=0;
	cout<<"Enter the binary number"<<endl;
	cin>>bin;
	while(bin)
	{
		bit=bin%10;
		dec=dec+bit*pow(2,base);
		base++;
		bin=bin/10;
	}
	cout<<"the decimal form is:"<<dec<<endl;
	return 0;
}
