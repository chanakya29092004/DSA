#include<bits/stdc++.h>
using namespace std;

// DUTCH NATOPNAL FLAG ALGORITHM 


int sorta(int arr[], int n) {
    int low=0,mid=0,high=n-1;
    while (mid<=high)
    {
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            
        }
        else if (arr[mid]==1)
        {
            mid++;
            
        }
        else //2
        {
            swap(arr[high],arr[mid]);
            high--;
        }
        
    }
    
        
    
    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

int main() {
    int arr[10] = {2,0,2,1,1,0};
    sorta(arr, 6);
   
    return 0;
}