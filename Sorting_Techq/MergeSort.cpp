#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int low,int mi,int high){
    int left=low;
    int right=mi+1;
    int temp[high-low+1];
    int k=0;
    
    
        while(left<=mi && right<=high){
            if(arr[left]<=arr[right]){
                temp[k++]=arr[left++];
            }
            else{
                temp[k++]=arr[right++];
            }
        }
    

    while(left<=mi) temp[k++]=arr[left++];
    while(right<=high) temp[k++]=arr[right++];

    for(int i=0;i<k;i++){
        arr[low+i]=temp[i];
    }
}
int merge_sort(int arr[],int low,int high){
    if(low==high) return 0;
    int mi=(low+high)/2;
    merge_sort(arr,low,mi);
    merge_sort(arr,mi+1,high);
    merge(arr,low,mi,high);
return 0; 
}
int main(){
    int arr[]={7,5,9,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout << endl;
return 0; 
}