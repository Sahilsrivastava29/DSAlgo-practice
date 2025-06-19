class Solution {
  public:
    string caseSort(string& s) {
        // code here
        
        string temp = s;
        
        // initialize the strings
        string lower = "";
        string upper = "";
        
        int n = s.length();
        
        for(int i=0; i<n; i++){
            // if lower character
            if(s[i]>='a' && s[i]<='z'){
                lower+= s[i];
            }
            // upper character
            else if(s[i]>='A' && s[i]<='Z'){
                upper+= s[i];
            }
        }
        
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        
        string ans = "";
        
        int l = 0;
        int j = 0;
        
        for(int i=0; i<n; i++){
            // lower character
            if(temp[i]>='a' && temp[i]<='z'){
                ans+= lower[l];
                l++;
            }
            else if(temp[i]>='A' && temp[i]<='Z'){
                    ans+= upper[j];
                    j++;
            }
        }
        
        return ans;
    }
};
