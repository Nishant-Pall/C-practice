#include<iostream>
using namespace std;

#define I INT_MAX

int cost[8][8] = {
{I,I,I,I,I,I,I,I},
{I,I,25,I,I,I,5,I},
{I,25,I,12,I,I,I,10},
{I,I,12,I,8,I,I,I},
{I,I,I,8,I,16,I,14},
{I,I,I,I,16,I,20,18},
{I,5,I,I,I,20,I,I},
{I,I,10,I,14,18,I,I}};

int near[8] = {I,I,I,I,I,I,I,I};
int t[2][6];

int main(){
	int i,j,k,u,v,n=7,min=I;
//	The following for loop for getting the minimum cost edge from the tree
	for(i=1; i<=n; i++){
		for(j=i;j<=n;j++){
			if(cost[i][j] < min){
				min = cost[i][j];
				u = i; 
				v = j;
			}
		}
	}
	t[0][0] = u; // adding the min edge in t
	t[1][0] = v; // adding the min edge in t
	near[u] = near[v] = 0;
//	Initializing the near array
	for(i=1; i<=n; i++){
		if(near[i]!=0){
			if(cost[i][u] < cost[i][v])
				near[i] = u;		// if i is near to u, mark it as u
			else
				near[i] = v;		// if i is near to v, mark it as v
		}		
	}
	for(i=1; i<n-1; i++){
		min = I;
		for(j=1; j<=n; j++){
//			This for loop is for getting the min cost edge from near array
			if(near[j]!=0 && cost[j][near[j]] < min){
				min = cost[j][near[j]];
				k=j;
			}
		}
		t[0][i] = k; 		// storing the edge in t
		t[1][i] = near[k]; // storing the edge in t
		near[k] = 0;	// marking it as zero means we've included the vertex in t
		for(j=1;j<=n;j++){
/*	This for loop is for updating the near array when we have included the next min edge,
	Now we will compare near[j] with the latest vertex and and previous vertex so as to get
	min edge in next iteration
*/
			if(near[j]!=0 && cost[j][k] < cost[j][near[j]])
				near[j] = k;
		}
	}
	for(i=0;i<n-1;i++){
 		cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<endl;
 	} 
}
