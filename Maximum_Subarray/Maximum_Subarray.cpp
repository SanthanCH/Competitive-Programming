class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,j,n=nums.size();
        int curr=0,ans=nums[0];
        for(i=0;i<n;i++){
            if(curr>=0)
                curr+=nums[i];
            else{
                curr=nums[i];
            }
            ans=max(curr,ans);
        }
        return ans;
    }
};
