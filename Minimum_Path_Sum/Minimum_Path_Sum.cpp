class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int dp[grid.size()][grid[0].size()];
        int i=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=grid[i][j];
                if(i==0&&j==0)
                    continue;
                int ans=INT_MAX;
                if(i>0)
                    ans=min(ans,dp[i-1][j]);
                if(j>0)
                    ans=min(ans,dp[i][j-1]);
                dp[i][j]=ans+grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};
