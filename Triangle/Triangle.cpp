class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size(),i,j;
        if(n==1)
            return triangle[0][0];
        int dp[n+1];
        for(j=0;j<n;j++)
            dp[j]=triangle[n-1][j];
        for(i=n-2;i>=0;i--){
            for(j=0;j<=i;j++){
               dp[j]=min(dp[j],dp[j+1]);
                dp[j]+=triangle[i][j];
            }
        }
        return dp[0];
    }
};
