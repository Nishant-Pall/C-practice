#include<iostream>
using namespace std;
int main()
{
	auto x=5*2.34 + 'a';
	cout<<x;
	int A[] = {1,2,3,4,5};
	cout<<endl;
	for(auto i : A){
		cout<<i<<endl;
	}
	return 0;
}
