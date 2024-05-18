#include<bits/stdc++.h>
using namespace std;


// an element is leader when all the elements in the right are less than the element

vector<int> mn(int arr[], int n) {
    vector<int> ans(n);
    int max = arr[n - 1];
    ans.push_back(arr[n-1]);
    
    for (int i = n-2; i >=0; i--)
    {
        if(arr[i]>max){
            ans.push_back(arr[i]);
            max=arr[i];
            
        }
    }

    return ans;
}

int main() {
    int arr[10] = {4,7,1,0};
    vector<int> leaders = mn(arr, 4);
   
    for(int i = leaders.size() - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;
    
   
    return 0;
}