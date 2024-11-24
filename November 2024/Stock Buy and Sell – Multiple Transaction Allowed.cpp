class Solution {
  public:
    int solveRec(int buy, int i, vector<int> &prices){
        int ans = 0;
        if(i == prices.size()){
            return ans;
        }
        
        if(buy){
            int buyStock = -prices[i] + solveRec(0,i+1,prices);
            int ignoreStock = 0 + solveRec(1,i+1,prices);
            ans = max(buyStock, ignoreStock);
        }
        else{
            int sellStock = prices[i] + solveRec(1,i+1,prices);
            int ignoreStock = 0 + solveRec(0,i+1,prices);
            ans = max(sellStock, ignoreStock);
        }
        return ans;
    }
    int solveMem(int buy, int i, vector<int> &prices,vector<vector<int>> &dp){
        int ans = 0;
        if(i == prices.size()){
            return ans;
        }
        if(dp[i][buy]!= -1){
            return dp[i][buy];
        }
        
        if(buy){
            int buyStock = -prices[i] + solveMem(0,i+1,prices,dp);
            int ignoreStock = 0 + solveMem(1,i+1,prices,dp);
            ans = max(buyStock, ignoreStock);
        }
        else{
            int sellStock = prices[i] + solveMem(1,i+1,prices,dp);
            int ignoreStock = 0 + solveMem(0,i+1,prices,dp);
            ans = max(sellStock, ignoreStock);
        }
        return dp[i][buy] = ans;
    }
    int maximumProfit(vector<int> &prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        
        return solveMem(1,0,prices,dp);
    }
};
