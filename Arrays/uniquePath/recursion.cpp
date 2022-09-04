#include<bits/stdc++.h>
using namespace std;

// unique paths Recursion approach
// Time complexity - Exponantial in nature

int countPath(int i,int j, int n, int m){
    if(i>=n or j>=m)
        return 0;
    if(i==n-1 and j==m-1)
        return 1;
    else
        return countPath(i+1,j,n,m)+countPath(i,j+1,n,m);
}

int uniquePath(int n, int m){
    return countPath(0,0,n,m);
}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<uniquePath(n,m);
}
