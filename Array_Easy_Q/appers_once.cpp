#include<bits/stdc++.h>
using namespace std;


int miss(int arr[], int n) {
    int xorr=0;
    for (int i = 0; i < n; i++)
    {
        xorr^=arr[i];
    }
    return xorr;
    
    

}

int main() {
    int arr[10] = {4,1,2,1,2};
    int x=miss(arr, 6);
    printf("%d", x);
    return 0;
}