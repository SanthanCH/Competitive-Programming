class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
      //If array is [] it you do not use this statement it will return k as 1
        int i,j,k=1;
        for(int i=1;i<nums.size();i++){
          if(nums[i]!=nums[i-1])
          {
             nums[k++]=nums[i];
          }
        }
        return k;
    }
};
