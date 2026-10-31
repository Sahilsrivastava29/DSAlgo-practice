class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        // base cases
        if(n == 0 || n == 1) return n;
        
        // step1: put the mapping
        unordered_map<int,bool> mp;

        // do the mapping
        for(auto it : nums){
            mp[it] = true;
        }

        // step2: do which are possible elements
        for(auto it : mp){
            int element = it.first;
            int target = element - 1;

            // exists
            if(mp.find(target)!=mp.end()){
                mp[element] = false;
            }
        }

        // step3 traverse again and check the chain
        int ans = 1;
        for(auto it : mp){
            if(it.second == true){
                int len = 1;
                int element = it.first;

                while(mp.find(element+len) != mp.end()){
                    len++;
                }
                ans = max(ans,len);
            }
        }

        return ans;
    }
};
