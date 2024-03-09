#include<bits/stdc++.h>
using namespace std;



int quick_sort(int arr[],int low,int high){
    if(low>=high)
        return 0;
   int pivot=low;
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high) 
            i++;
        while(arr[j]>arr[pivot])
             j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[pivot],arr[j]);
    quick_sort(arr,low,j-1);
    quick_sort(arr,j+1,high);
return 0; 
}
int main(){
    int arr[]={7,5,9,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
return 0; 
}