class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
          int n=obstacleGrid[0].size();
        if(m==1&&n==1)
            return (obstacleGrid[m-1][n-1]+1)%2;
        //if there is only one element
        
        if(obstacleGrid[0][0]==1||obstacleGrid[m-1][n-1]==1)
            return 0;
        // if top left or bottom right is obstacle then its 0;
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
                if(obstacleGrid[i][j]==1)
                    dp[i][j]=-1;
            }
        }
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j]==-1||(i==0&&j==0))
                {
                    continue;
                }
                 if(i>0)
                 {
                  int up=dp[i-1][j];
                 if(up!=-1)
                     dp[i][j]+=up;
                 }
                if(j>0){
                    int left=dp[i][j-1];
                    if(left!=-1)
                        dp[i][j]+=left;
                }
                
            }
        }
    
        
        return dp[m-1][n-1];
    }
};
