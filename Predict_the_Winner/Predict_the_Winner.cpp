//Using dp 
class Solution {
public:
    int dp[21][21];
    int maxdiff(vector<int>&nums,int i,int j)
        {
       
        if(i>j)
            return 0;
         if(dp[i][j]!=-1)
            return dp[i][j];
        int left=nums[i];
        int l=maxdiff(nums,i+1,j);
        int right=nums[j];
        int r=maxdiff(nums,i,j-1);
        return dp[i][j]=max(left-l,right-r);
     
    }
    bool PredictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        if(maxdiff(nums,0,nums.size()-1)>=0)
            return true;
        return false;
    }
};
