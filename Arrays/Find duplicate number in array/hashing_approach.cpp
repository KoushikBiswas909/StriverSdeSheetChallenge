class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // take a another vector to store occurence, initilized with 0
        int n = nums.size();
        vector<int> hash(n,0);
        
        // store the count
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        
        int res = 0;
        for(int i=0;i<hash.size();i++){
            if(hash[i] > 1){
                res = i;
                break;
            }
        }
        
        return res;
    }
};
