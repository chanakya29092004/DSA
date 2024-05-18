#include<bits/stdc++.h>
using namespace std;




int s(int arr[], int n) {
    int maxp=0,mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,arr[i]);
        maxp=max(maxp,(arr[i]-mini));
    }
    cout<<maxp<<endl;
    return 0;
}

int main() {
    int arr[10] = {7,1,5,3,6,4};
    s(arr, 6);
   
    return 0;
}