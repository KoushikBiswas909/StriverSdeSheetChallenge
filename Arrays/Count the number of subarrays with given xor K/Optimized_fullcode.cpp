#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> A, int B){
    map<int, int> freq;
    int xorr=0, cnt=0;

    for(auto it: A){
        xorr = xorr^it;
        freq[xorr]++;

        if(xorr == B)
            cnt++;

        if(freq.find(xorr^B) != freq.end()){
            cnt += freq[xorr^B];
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(auto &it: A)
        cin>>it;
    int B;
    cin>>B;

    cout<<solve(A,B);
}
