#include<bits/stdc++.h>
using namespace std;


int miss(int arr[], int n) {
    int xorr=0,xorr2=0;
    for (int i = 0; i < n; i++)
    {
        xorr^=arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        xorr2^=i;
    }
    return xorr^xorr2;
    
    
    
    
}

int main() {
    int arr[10] = {1,2,3,5};
    int x=miss(arr, 5);
    printf("%d", x);
    return 0;
}