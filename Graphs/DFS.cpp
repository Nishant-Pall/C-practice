#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
int visited[8]={0};		// for keeping track of vertices which are visited

void DFS(int A[][8],int u)
{
	if(visited[u]==0)
	{
		cout<<u<<endl;		// visit the vertex
		visited[u]=1;		// mark it as visited
		for(int v=1;v<8;v++)	
		{	
			if(A[u][v]==1 && visited[v] ==0) // check for connection and check if it's previously visited
				DFS(A,v);						// call it again
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
	DFS(A,1);
	return 0;
}
