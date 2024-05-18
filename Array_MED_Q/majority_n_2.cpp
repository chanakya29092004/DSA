#include<bits/stdc++.h>
using namespace std;


// moore's voting algorithm

int mn(int arr[], int n) {
    int cnt=0,ele;
    for (int i = 0; i < n; i++)
    {
        if(cnt==0){
            ele=arr[i];
            cnt=1;
        }
        else if (ele!=arr[i])
             cnt--;
        
        else cnt++;
        
    }
    int cnt1=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==ele) cnt1++;
    }
    if(cnt1<=n/2) cout<<"-1"<<endl;
    else cout<<ele<<endl;
    
    
    
    
    
    return 0;
}

int main() {
    int arr[10] = {2,2,1,1,1,2,2};
    mn(arr, 7);
   
    return 0;
}