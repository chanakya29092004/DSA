#include<bits/stdc++.h>
using namespace std;



int selection_sort(int arr[],int n){
    

    int i, j, mini;

    for (i = 0; i < n; i++) {
        mini = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }

    
return 0; 
}
int main(){
    int arr[]={7,5,9,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
return 0; 
}