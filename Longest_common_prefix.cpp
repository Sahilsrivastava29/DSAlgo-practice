class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // SC -> O(1)
        // TC -> O(N2)
        int n = strs.size();

        // base cases
        if(n == 0) return "";
        if(n == 1) return strs[0];

        // traverse
        string ans = "";

        for(int i=0; i<strs[0].length(); i++){
            for(int j=1; j<n; j++){
                // if not equal
                if(strs[0][i] != strs[j][i]){
                    return ans;
                }
            }
            ans+= strs[0][i];
        }

        return ans;
    }
};
