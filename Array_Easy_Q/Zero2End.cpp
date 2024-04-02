#include<bits/stdc++.h>
using namespace std;





void z2e(int arr[], int n) {

    // always the array should be sorted if u want to use binary search
    // pointing j to the 1st index of 0
    int j;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]==0){
        j=i;
        break;
       }
    }
    

    // swapping the 0 
    for ( int i = j+1; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j++]);
        }
    }
    



    for(int j=0;j<n;j++ )
        cout<<arr[j]<<endl;
    
}

int main() {
    int arr[10] = {2, 0, 3, 0, 5, 5, 5};
    z2e(arr, 7);
    return 0;
}