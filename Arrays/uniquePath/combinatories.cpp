#include<bits/stdc++.h>
using namespace std;

// unique paths Combinatorics  approach
// Time complexity - O(m-1) or O(n-1)
// Space complexity - 0(1)


int uniquePath(int n, int m){
    int N = n+m-2;
    int r = m-1; // or n-1, both same

    double res = 1;

    for(int i=1;i<=r;i++){
        res = res * (N-r+i)/i;
    }

    return (int)res;
}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<uniquePath(n,m);
}


