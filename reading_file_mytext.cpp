#include<iostream>
#include<fstream>
using namespace std;
int main()
{ifstream infile("my.txt");//or we can write infile.open("my.txt")
string str;
int x;
infile>>str;
infile>>x;
cout<<str<<" "<<x<<endl;
infile.close();
return 0;
}
