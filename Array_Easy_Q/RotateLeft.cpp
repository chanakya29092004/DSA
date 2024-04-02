#include<bits/stdc++.h>
using namespace std;


// always the array should be sorted


void rl(int arr[], int n,int d) {
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main() {
    int arr[10] = {2, 2, 3, 4, 5, 5, 5};
    rl(arr, 7,2);
    return 0;
}