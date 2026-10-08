class Solution {
public:

    int solve(int x, int y, vector<vector<int>>& grid , vector<vector<int>> &dp) {

        int m = grid.size();
        int n = grid[0].size();
        
        if(x >= m || y >= n || grid[x][y] == 1)
            return 0;

        if( dp[x][y] != -1)
        return dp[x][y];

        if(x == m-1 && y == n-1)
            return 1;

        dp[x][y] = solve(x+1, y, grid,dp) + solve(x, y+1, grid,dp);
        return dp[x][y];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        vector<vector<int>> dp(obstacleGrid.size(),vector<int> (obstacleGrid[0].size(),-1));
        return solve(0, 0, obstacleGrid,dp);
    }
};