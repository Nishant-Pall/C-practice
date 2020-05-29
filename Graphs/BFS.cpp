#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
int visited[8]={0};

void BFS(int A[][8],int i)
{
	int u;
	cout<<i<<endl;
	visited[i]=1;
	q.push(i);
	while(!q.empty())
	{
		u = q.back();
		q.pop();
		for(int v =1;v<8;v++)
		{
			if(A[u][v]==1 && visited[v]==0)
			{
				cout<<v<<endl;
				visited[v]=1;
				q.push(v);
			}
		}
	}
}
int main()
{
	int A[8][8]={0};
	for(int i=1;i<8;i++)
	{
		for(int j=1;j<8;j++)
		{
			cout<<"Enter A["<<i<<"]"<<"["<<j<<"]:";
			cin>>A[i][j];
			cout<<endl;
		}
	}
	BFS(A,1);
	return 0;
}
