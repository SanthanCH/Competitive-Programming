class Solution {
public:
    int maxProfit(vector<int>& nums) {
       int mx=0,mi=nums[0];
       for(int i=1;i<nums.size();i++){
           mx=max(mx,nums[i]-mi);
           mi=min(mi,nums[i]);
       }
        return mx;
    }
};
