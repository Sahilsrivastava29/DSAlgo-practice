class Solution {
public:
    bool isValid(vector<int> &temp, int k) {

        int n = temp.size();

        sort(temp.begin(), temp.end());

        int i = 0;
        int j = 1;

        while(j < n) {

            int diff = abs(temp[i] - temp[j]);

            if(diff <= k) {
                return true;
            }

            i++;
            j++;
        }

        return false;
    }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> mp;

        // define the size
        int n = nums.size();

        // do the mapping
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }

        // traverse on the map
        for(auto it : mp){
            vector<int> temp = it.second;

            if(temp.size()>1){
                if(isValid(temp,k)){
                    return true;
                }
            }
            else{
                continue;
            }
        }

        return false;
    }
};
