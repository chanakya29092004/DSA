#include<bits/stdc++.h>
using namespace std;

int maxi=0,mini=0;
int largest(int arr[],int n){
    maxi=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxi)
            maxi=arr[i];
    }
    return maxi;
}

int smallest(int arr[],int n){
    mini=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<mini)
            mini=arr[i];
    }
    return mini;
} 
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    largest(arr,10);
    smallest(arr,10);
    cout<<"largest="<<maxi<<" and smallest="<<mini<<endl;
    return 0;
}