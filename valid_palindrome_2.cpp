class Solution {
public:
    bool isPal(string &s, int i, int j){
        int n = s.length();

        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }

        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();

        // define the pointers
        int i = 0;
        int j = n-1;

        while(i<=j){
            if(s[i] != s[j]){
                return isPal(s,i+1,j) || isPal(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
        }

        return true;
    }
};
