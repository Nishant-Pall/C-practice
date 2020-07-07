#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=5;
    int p[] = {3,2,4,2,5};
    int m[5][5] = {0};
    int s[5][5] = {0};
    int j=0, min=0, q=0;
    for(int d = 1; d < n-1; d++) //this loop for iterating through diagonals
    {
    	for(int i=1; i<n-d; i++) // for every row in diagonal, n-d because number of rows is reducing
    	{
    		j = i + d; // difference = j - i
    		min = 32767;
    		for(int k=i; k<=j-1; k++)
    		{
    			q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
    			if(q < min)
    			{
    				min = q;
    				s[i][j] = k;
				}
			}
			m[i][j] = min;
		}
	}
	cout<<m[1][n-1]<<endl;
	for(int i=n-1; i > 1; i--)
	{
		cout<<s[1][i]<<endl;
	}
    return 0;
}

