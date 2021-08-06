class Solution {
public:
    int numDecodings(string s) {
        int i,n=s.length(),j,k;
        int dp[n+2];
        for(i=0;i<=n;i++)
            dp[i]=0;
        dp[0]=1;
        if(s[0]=='0')
            return 0;
       for(i=0;i<n;i++){
           if(s[i]=='0'&&(s[i-1]=='1'||s[i-1]=='2')){
              dp[i+1]=dp[i-1]; 
           }
           else if(s[i]>'0'&&s[i]<='9'){
               dp[i+1]+=dp[i];
           }
           if(i<n-1&&(s[i]=='1'||s[i]=='2'&&s[i+1]<='6')){
               dp[i+2]+=dp[i];
           }
       }
      return dp[n];
    }
};
