class Solution {
public:
    int dp[20];
    int find(int n){
        if(n<=1)
            return 1;
        if(dp[n]!=0)
            return dp[n];
        for(int i=1;i<=n;i++){
            int left=i-1,right=n-i;
            dp[n]+=find(left)*find(right);
            
        }
        return dp[n];
    }
    int numTrees(int n) {
      return find(n);  
    }
};
