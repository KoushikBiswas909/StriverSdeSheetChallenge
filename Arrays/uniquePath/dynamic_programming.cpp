#include<bits/stdc++.h>
using namespace std;

// unique paths Dynamic Programming approach
// Time complexity - The time complexity of this solution will be O(n*m) because at max there can be n*m number of states.
// Space complexity - As we are using extra space for the dummy matrix the space complexity will also be O(n*m).

int countPath(int i,int j, int n, int m, vector<vector<int>> &dp){
    if(i>=n or j>=m)
        return 0;
    if(i==n-1 and j==m-1)
        return 1;
    if(dp[i][j]!=-1)
        return dp[i][j];
    else
        return dp[i][j]=countPath(i+1,j,n,m,dp)+countPath(i,j+1,n,m,dp);
}

int uniquePath(int n, int m){
    vector<vector<int>> dp(n+1,vector<int> (m+1, -1));
    int result = countPath(0,0,n,m,dp);

    if(n==1 and m==1)
        return result;
    else
        return dp[0][0];
}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<uniquePath(n,m);
}
