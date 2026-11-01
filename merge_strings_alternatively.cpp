class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        // define the two pointers
        int i = 0;
        int j = 0;

        // define ans variable
        string ans = "";

        // traverse
        while (i < n && j < m) {
            ans += word1[i];
            ans += word2[i];

            i++;
            j++;
        }

        // if word1 or word2 is left
        if (i < n) {
            while (i < n) {
                ans += word1[i];
                i++;
            }
        }

        if (j < m) {
            while (j < m) {
                ans += word2[j];
                j++;
            }
        }

        return ans;
    }
};
