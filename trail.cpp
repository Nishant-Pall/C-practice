#include<iostream>
using namespace std;
int main()
{
 int i,sum,n;
 cout<<"enter the number till you want the sum";
 cin>>n;
 for(i=1,sum=0;i<=n;sum+=i,++i)
 {
 	cout<<endl<<i;

 }
 cout<<endl<<"the sum of first"<<n<<"natural numbers is:"<<sum<<endl;
 return 0;
}
