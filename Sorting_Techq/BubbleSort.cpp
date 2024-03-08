#include<bits/stdc++.h>
using namespace std;



int bubble_sort(int arr[],int n){
    

    int i, j, mini;

    for (i = n-1; i>=0 ; i--) {
        for (j = 0; j < i; j++) {
            if (arr[j+1] < arr[j]) {
                swap(arr[j+1], arr[j]);
            }
        }
        
    }
// alternative approach
    // for (i = 0; i<n ; i++) {
    //     for (j = 0; j < n-i-1; j++) {
    //         if (arr[j+1] < arr[j]) {
    //             swap(arr[j+1], arr[j]);
    //         }
    //     }
        
    // }

    
return 0; 
}
int main(){
    int arr[]={7,5,9,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
return 0; 
}