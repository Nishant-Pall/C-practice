#include<iostream>
using namespace std;

int main()
{	int n=8 ,stages=4;
	int min;
	int cost[9]={0},d[9]={0},Path[9]={0};
	int C[9][9] = { {0,0,0,0,0,0,0,0,0},
					{0,0,2,1,3,0,0,0,0},
					{0,2,0,0,0,2,3,0,0},
					{0,1,0,0,0,6,7,0,0},
					{0,3,0,0,0,6,8,9,0},
					{0,0,2,6,6,0,0,0,6},
					{0,0,3,7,8,0,0,0,4},
					{0,0,0,0,9,0,0,0,5},
					{0,0,0,0,0,6,4,5,0}};
	
	cost[n] = 0;
	for(int i=n-1; i>=1;i--) // start from sink and go back at every vertex
	{
		min = 32767;
		for(int k=i+1; k <= n; k++)	// take cost of every vertex connected to i i.e. k
		if(C[i][k]!=0 && C[i][k] + cost[k] < min) // check if edge exists and Total cost is minimum
		{
			min = C[i][k] + cost[k];
			d[i] = k;
		}
		cost[i] = min;
	}
	Path[1] = 1;
	Path[stages] = n;
	for(int i=2; i<stages;i++)
		Path[i] = Path[d[i-1]];
	
	cout<<"The path is:";
	for(int i=1; i<=stages; i++)
	{
		cout<<Path[i]<<" ";
	}
	return 0;
}
