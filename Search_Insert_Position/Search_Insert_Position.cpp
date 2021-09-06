class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),i=0,j=n;
        while(i<j){
          int mid=(i+j)/2;
           
            if(nums[mid]==target)
                return mid;
          if(nums[mid]<target)
              i=mid+1;
            else
                j=mid;
        }
        return i;
    }
};
