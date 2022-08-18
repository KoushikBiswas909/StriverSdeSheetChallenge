#include<bits/stdc++.h>
using namespace std;

// Brute force approach

void mergeFunc(vector<int> &arr1, vector<int> &arr2, int n, int m){
  int resVecSize = n+m;
  vector<int> res;

  for(auto it: arr1)
    res.push_back(it);

  for(auto it: arr2)
    res.push_back(it);

  sort(res.begin(), res.end());

  for(auto it: res)
    cout<<it<<" ";
}

int main(){
  int n,m;
  cin>>n>>m;

  vector<int> arr1(n),arr2(m);

  for(auto &it: arr1)
    cin>>it;

  for(auto &it: arr2)
    cin>>it;

  mergeFunc(arr1,arr2,n,m);
}
