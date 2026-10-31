class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        // define ans array
        vector<int> ans;

        unordered_map<int,int> mp;

        // store the freq
        for(auto it : nums){
            mp[it]++;
        }

        // get the max and min values
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());

        // traverse
        for(int i=mini; i<=maxi; i++){
            int element = i;

            int freq = mp[i];

            for(int i=1; i<=freq; i++){
                ans.push_back(element);
            }
        }

        return ans;
    }
};
