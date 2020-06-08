#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> removeDuplicates(int arr[], int size){
	vector<int> output;
	unordered_map<int, bool> seen;
	for(int i=0; i < size; i++){
		if(seen.count(arr[i]) > 0)
			continue;
		seen[arr[i]] = true;
		output.push_back(arr[i]);
	}
	return output;
}

int main(){
	int v[] = {1,2,3,4,5,4,3,2,1};
	vector<int> output = removeDuplicates(v,9);
	for(int i=0; i < output.size(); i++)
		cout<<output[i]<<endl;
}
