class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size(),curr=0,mx=0,i;
        int dp[n];
         memset(dp, -1, sizeof(dp));
        for(i=0;i<n;i++){
            curr=1;
            int ind=nums[i];
            if(dp[i]==-1){
            while(nums[ind]!=nums[i]){
                ind=nums[ind];
                dp[ind]=0;
                curr++;
            }
            dp[i]=0;
            }
            mx=max(mx,curr);
        }
        return mx;
    }
};
