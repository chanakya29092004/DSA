#include<bits/stdc++.h>
using namespace std;

int check_sort(int arr[],int n){
    for (int  i = 0; i < n-1; i++)
    {
        if(arr[i+1]<arr[i]){
            cout<<"not sorted";
            return -1;
        }
            
        
        
    }
    cout<<"sorted"<<endl;
    return 0;
    
}

int main(){
    int arr[10]={3,2,3,4,5,6,7,8,9,10};
    check_sort(arr,10);
    return 0;
}