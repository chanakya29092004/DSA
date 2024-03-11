#include<bits/stdc++.h>
using namespace std;
#include <climits>

int maxi=0,mini=0;
int sl=INT_MIN;
int ss = INT_MAX;

int s_largest(int arr[],int n){
    maxi=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            sl=maxi;
            maxi=arr[i];
        }
            
    }
    return sl;
}

int s_smallest(int arr[],int n){
    mini=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            ss=mini;
            mini=arr[i];
        }
        else if(arr[i] < ss && arr[i] != mini)
            ss = arr[i];
        
            
    }
    return mini;
} 
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    s_largest(arr,10);
    s_smallest(arr,10);
    cout<<"s_largest="<<sl<<" and s_smallest="<<ss<<endl;
    return 0;
}