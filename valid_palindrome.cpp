class Solution {
public:
    bool isPal(string &str){
        int n = str.length();

        // define two pointers
        int i = 0;
        int j = n-1;

        while(i<=j){
            if(str[i] != str[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }

        return true;
    }
    bool isPalindrome(string s) {
        int n = s.length();

        string str = "";

        for(int i=0; i<n; i++){
            // if its a lowercase
            if(s[i]>='a' && s[i]<='z'){
                str+= s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                str+= s[i] + 32;
            }
            // if its a number
            else if(s[i]>='0' && s[i]<='9'){
                str+= s[i];
            }
            else{
                // else ignore
                continue;
            }
        }

        return isPal(str);
    }
};
