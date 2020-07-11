#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int P[5] = {0,1,2,5,6};
    int Wt[5] = {0,2,3,4,5};
    int m=8, n=4;
    int K[5][9];
    for(int i=0; i<=n; i++) {
    	for(int w=0; w<=m; w++) {
    		if(i==0||w==0)
    			K[i][w] = 0;
    		else if(Wt[i]<=w)
    			K[i][w] = max(K[i-1][w], K[i-1][w-Wt[i]] + P[i]);
    		else
    			K[i][w] = K[i-1][w];
		}
	}
	cout<<"Max Profit is: "<<K[n][m]<<endl;
	int i = n;
	int j = m;
	while(i > 0 && j > 0) {
		if(K[i][j] == K[i-1][j]) {
			cout<<i<<" = 0"<<endl;
			i--;
		}
		else {
			cout<<i<<" = 1"<<endl;
			i--;
			j-=Wt[i];
		}
	}
    return 0;
}

