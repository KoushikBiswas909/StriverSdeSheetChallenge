class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // Put the value in a set 
        unordered_set<int> hashSet;
        for(auto it: nums)
            hashSet.insert(it);
        
        int longestStreak = 0;
        
        // iterate over the given array
        for(auto it: nums){
            
            // check until there are no possible small value, (find out smallest value)
            if(!hashSet.count(it-1)){
                int currentNum = it;
                int currentStreak = 1;
                
                // start a forward loop from smallest number
                while(hashSet.count(currentNum+1)){
                    currentNum +=1;
                    currentStreak +=1;
                }
                
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        
        return longestStreak;
    }
};
