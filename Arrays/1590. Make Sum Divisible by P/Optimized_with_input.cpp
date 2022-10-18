#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums, int p){
    int need_to_remove = 0;
    for(auto it: nums){
        need_to_remove = (need_to_remove + it)%p;
    }
    if(need_to_remove == 0)
        return 0;

    unordered_map<int,int> pre_sum;
    pre_sum[0] = -1;
    int tmp =0, res = nums.size();
    for(int i=0;i<nums.size();i++){
        tmp = (tmp + nums[i])%p;
        pre_sum[tmp] = i;

        int rest = (tmp - need_to_remove +p)%p;

        if(pre_sum.find(rest) != pre_sum.end()){
            res = min(res, i-pre_sum[rest]);
        }
    }

    if(res >= nums.size()){
        return -1;
    }
    else
        return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto &it: nums){
        cin>>it;
    }
    int p;
    cin>>p;

    cout<<solve(nums, p);
}
