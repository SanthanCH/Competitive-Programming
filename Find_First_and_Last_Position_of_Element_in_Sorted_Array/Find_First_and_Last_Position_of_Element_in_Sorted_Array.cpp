class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int fi=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
      int se=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(fi>=nums.size()||nums[fi]!=target)
            return {-1,-1};
        return {fi,se-1};
    }
};
