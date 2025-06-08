class Solution {
  public:
      
    int solve(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<int>>& dp) {
        
       
        if(i >= m || i < 0 || j >= n || j < 0 || grid[i][j] == 1){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i == m-1 && j == n-1){
            return 1;
        }
        int right = solve(grid,i,j+1,m,n,dp);
        int bottom = solve(grid,i+1,j,m,n,dp);
        
        return dp[i][j] = right + bottom;
    }
    int uniquePaths(vector<vector<int>> &grid) {
        // code here
         int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(grid,0,0,m,n,dp);
    }
};
