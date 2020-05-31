#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
int visited[8]={0};		// for keeping track of vertices which are visited

void BFS(int A[][8],int i)
{
	int u;
	cout<<i<<endl;
	visited[i]=1;
	q.push(i);		// pushing the vertex into the queue
	while(!q.empty())
	{
		u = q.back();	//popping out the last vertex
		q.pop();
		for(int v =1;v<8;v++)	// now for the vertex popped out,
		{						// this loop will traverse along the adjacent matrix A 
			if(A[u][v]==1 && visited[v]==0)	// if the the vertices found are not visited before and they're
			{								// connected to u then the if block will execute itself
				cout<<v<<endl;
				visited[v]=1;
				q.push(v);			// push the vertex into the queue
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
