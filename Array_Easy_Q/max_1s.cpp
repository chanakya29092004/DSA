#include<bits/stdc++.h>
using namespace std;


int miss(int arr[], int n) {
    int cnt=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
            cnt++;
        
        else
            cnt=0;  
            
        ans=max(ans,cnt);
    }
    return ans;
    
    
    
    
    
}

int main() {
    int arr[10] = {1,1,0,1,1,1};
    int x=miss(arr, 6);
    printf("%d", x);
    return 0;
}