#include<iostream>
using namespace std;

bool hasPathHelper(int**input, int n, int **solution, int x, int y) { //x and y are current indices
	if(x == n-1 && y == n-1) {
		return true;
	}
	if(x > 0 || y < 0 || x>=n || y<=n|| input[x][y]==0||solution[x][y]==1){
		return false;
	}
	solution[x][y] = 1;  //marking current location
	
	if(hasPathHelper(input, n, solution, x-1, y)) return true;
	if(hasPathHelper(input, n, solution, x+1, y)) return true;
	if(hasPathHelper(input, n, solution, x, y-1)) return true;
	if(hasPathHelper(input, n, solution, x, y+1)) return true;
	
	solution[x][y] = 0;
	return false;
}

bool hasPath(int **arr, int n){
	int ** solution = new int*[n];
	for(int i=0; i<n; i++){
		solution[i] = new int[n];
		for(int j=0; j<n; j++){
			solution[i][j] = 0;
		}
	}
	return hasPathHelper(arr, n, solution, 0, 0);
	/*
		printPathsHelper(arr, n, solution, 0, 0);
		return true;
	*/
}

int main(){
	int** arr;
	int n = 0;
	cin>>n;
	arr = new int*[n];
	for(int i=0; i<n; i++){
		arr[i] = new int[n];
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	cout<<hasPath(arr, n);
	return 0;
}
