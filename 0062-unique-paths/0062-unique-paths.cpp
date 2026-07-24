class Solution {
public:
    int solve(int m, int n, int i, int j,vector<vector<int>>& dp)
    {
        if(i >= m || j >= n) return 0;       // reached out of bounds - invalid
        if(i == m-1 && j == n-1) return 1;   // if robot already on destination
        
        if(dp[i][j] != -1)
        {
            return dp[i][j]; // we are returning the value instead of recalculating it 
        }
        return dp[i][j]= solve(m, n, i+1, j,dp) +  solve(m, n, i, j+1,dp); // recursively calculate and store dp[i][j]
    }

    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m,n,0,0,dp);
    }
};