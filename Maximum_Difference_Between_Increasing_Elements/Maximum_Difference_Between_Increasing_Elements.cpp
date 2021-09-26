class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mi=nums[0],mx=nums[0],k=0;
        for(int i=1;i<nums.size();i++){
           if(mi>nums[i])
           {
               mi=nums[i];
               mx=0;
           }
            mx=max(mx,nums[i]);
            k=max(k,mx-mi);
        }
        if(k)
            return k;
        return -1;
    }
};
