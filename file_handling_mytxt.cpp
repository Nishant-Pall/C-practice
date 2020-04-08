#include<fstream>
using namespace std;
int main()
{
ofstream outfile("my.txt");
outfile<<"Hello"<<endl;
outfile<<69<<endl;
outfile.close();
return 0;
}
