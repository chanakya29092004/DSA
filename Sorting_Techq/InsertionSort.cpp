#include<bits/stdc++.h>
using namespace std;



int insertion_sort(int arr[],int n){
    

    int i, j;
    for ( i = 1; i < n; i++)
    {
        j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    

    
return 0; 
}
int main(){
    int arr[]={7,5,9,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
return 0; 
}