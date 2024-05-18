#include<bits/stdc++.h>
using namespace std;


// only if there are equal positive and negative elements

// if u have unequal positive and negative elements >>fall back to brute force

// brute force>> create a positive array containing all positive elements and negative array containing all negative elements
// then merge them in the required order

int s(int arr[], int n) {
    int ans[n],pi=0,ni=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0){
            ans[pi]=arr[i];
            pi=pi+2;
        }
        else{
            ans[ni]=arr[i];
            ni=ni+2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}

int main() {
    int arr[10] = {3,1,-2,-5,2,-4};
    s(arr, 6);
   
    return 0;
}