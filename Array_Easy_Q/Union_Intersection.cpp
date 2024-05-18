
#include <bits/stdc++.h>

using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  vector <int> Union;
    int i=0,j=0;
    while (i<n&&j<m)
    {
        if(arr1[i]<=arr2[j]){
            if(Union.empty() || Union.back()!=arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else {
            if(Union.empty() || Union.back()!=arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
        
    }
    while (i<n)
    {
        if(Union.empty() || Union.back()!=arr1[i])
                Union.push_back(arr1[i]);
        i++;
    }
    while (j<m)
    {
        if(Union.empty() || Union.back()!=arr2[j])
                Union.push_back(arr2[j]);
        j++;
    }
 
  return Union;
}

vector < int > FindInter(int arr1[], int arr2[], int n, int m) {
    vector <int> Inter;
        int i=0,j=0;
        while (i<n&&j<m)
        {
            if(arr1[i]<arr2[j])
                i++;
            else if(arr1[i]>arr2[j])
                j++;
            else {
                if(Inter.empty() || Inter.back()!=arr1[i])
                    Inter.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    return Inter;
    
}



int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
    cout<<endl;
    vector < int > Inter = FindInter(arr1, arr2, n, m);
  cout << "intersection of arr1 and arr2 is  " << endl;
  for (auto & val: Inter)
    cout << val << " ";
  return 0;
}

