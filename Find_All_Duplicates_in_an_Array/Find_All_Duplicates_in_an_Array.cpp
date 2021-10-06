class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       int i,j,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]!=nums[nums[i]-1]){
            swap(nums[nums[i]-1],nums[i]);
                i--;
            }
        }
        vector<int>ans;
        for(i=0;i<n;i++){
            if(nums[i]!=i+1)
                ans.push_back(nums[i]);
                
        }
        return ans;
    }
};
