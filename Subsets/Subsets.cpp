class Solution {
public:
    vector<vector<int>>ans;
    void sub(vector<int>&nums,int ind,vector<int>arr){
        if(ind>=nums.size())
        {
                ans.push_back(arr);
            return;
        }
        sub(nums,ind+1,arr);
        arr.push_back(nums[ind]);
        sub(nums,ind+1,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        sub(nums,0,arr);
        return ans;
    }
};
