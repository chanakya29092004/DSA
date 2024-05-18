#include<bits/stdc++.h>
using namespace std;


pair<int,int> twosum(int arr[], int n,int target) {
    sort(arr,arr+n);
    pair<int,int> p;
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==target){
            p.first=arr[low];
            p.second=arr[high];
            return p;
        }
        else if(arr[low]+arr[high]>target){
            high--;
        }
        else low++;
    }
}

int main() {
    int arr[10] = {2,6,5,8,11,6};
    pair<int,int> ans=twosum(arr, 6,14);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}