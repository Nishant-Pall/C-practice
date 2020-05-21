#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 
  
void bucketSort(int arr[], int n, int max) 
{ 
    
    vector<int> b[max]; 
 
    for (int i=0; i<n; i++) 
    { 
       
       b[arr[i]].push_back(arr[i]); 
    } 
 
    int index = 0; 
    for (int i = 0; i < max; i++) 
        for (int j = 0; j < b[i].size(); j++) 
          arr[index++] = b[i][j]; 
} 
  
  int Max(int arr[],int n)
  {
      int max=arr[0];
      for(int i=1;i<n;i++)
      {if(arr[i]>max)
      max=arr[i];}
      return max;
  }
 
int main() 
{ 
    int arr[] = {9,8,7,6,5,1,3,2,2,9,8}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int max=Max(arr,n);
    bucketSort(arr, n,max+1); 
  
    cout << "Sorted array is \n"; 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
    return 0; 
} 
