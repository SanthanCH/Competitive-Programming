class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4)
            return 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mi=nums[n-1]-nums[3];
        mi=min(mi,nums[n-2]-nums[2]);
        mi=min(mi,nums[n-3]-nums[1]);
        mi=min(mi,nums[n-4]-nums[0]);
        return mi;
    }
};
