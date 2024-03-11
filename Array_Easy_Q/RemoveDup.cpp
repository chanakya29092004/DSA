#include<bits/stdc++.h>
using namespace std;


// always the array should be sorted


int rem_dup(int arr[], int n) {
    int i = 0;
    for (int j = i+1; j < n; j++) {
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        } 
    }
    for(int j=0;j<i+1;j++ )
        cout<<arr[j]<<endl;
    return 0;
}

int main() {
    int arr[10] = {2, 2, 3, 4, 5, 5, 5};
    rem_dup(arr, 7);
    return 0;
}