#include<iostream>
using namespace std;
int main()
{
	int n,i=2,c=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(i<n)
	{
		if(n%i==0) 
		c++;
		++i;
    }
    if(c==0)
			cout<<"the number "<<n<<" is prime"<<endl;
		
			else
			cout<<"the number "<<n<<" is not prime"<<endl;
	    
	
	return 0;
}
