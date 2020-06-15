#include<iostream>
using namespace std;

int main(){
	int a[3] = {0,1,2};
	int* p =a;
	cout<<p<<endl;
	cout<<&a[*p]<<" "<<a[*p];
}
