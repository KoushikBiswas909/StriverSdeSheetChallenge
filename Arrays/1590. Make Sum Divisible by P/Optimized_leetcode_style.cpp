class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
    int need_to_remove = 0;

    // Value can be 10^9 to avoid overflow, calculate the reminders
    for(auto it: nums){
        need_to_remove = (need_to_remove+it)%p;
    }

    // If reminder is zero so no need to delete any subarray, so length = 0.
    if(need_to_remove == 0){
        return 0;
    }

    // Take an unordered map where key = prefix sum reminders, value = it's index
    unordered_map<int,int> pre_sum;

    // To control underflow insert this.
    pre_sum[0]=-1;

    int tmp=0,res=nums.size();

    // Travere through loop
    for(int i=0;i<nums.size();i++){

        // Calculate prefix sum reminders
        tmp = (tmp + nums[i])%p;
        // Insert pre sum reminder with their index
        pre_sum[tmp] = i;

        // check if there any prefix sum reminder perfectly divide by p?
        // Extra +p to handel negative values after calculating (tmp-need_to_remove)
        int rest = (tmp - need_to_remove + p)%p;

        // Check if there are any same prefix sum reminder occurs before
        if(pre_sum.find(rest) != pre_sum.end()){

            // If occurs then previous occurence last index to current occurence
            // first index is the minimum length subarray.
            res = min(res, i - pre_sum[rest]);
        }
    }

    // if res == nums.size remains same till last , so there have no posibility
    // to make the array perfectly divided by p.
    if(res >= nums.size()){
        return -1;
    }
    else{
        return res;
    }
        }
};
