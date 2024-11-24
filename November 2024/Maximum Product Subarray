// Maximum product subarray
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
         int n=arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=i;j<n;j++){
                prod=prod*arr[j];
                maxi=max(maxi,prod);
            }
        }
        return maxi;
    }
};
