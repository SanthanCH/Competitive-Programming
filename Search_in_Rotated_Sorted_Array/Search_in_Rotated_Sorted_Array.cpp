class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        while(i<=j){
            mid=(i+j)/2;
           // cout<<i<<" "<<j<<"\n";
            if(nums[mid]==target)
                return mid;
            if(nums[i]<nums[mid]&&target<=nums[mid]&&target>=nums[i]){
                    j=mid-1;
                }
            else if(nums[i]>nums[mid]&&(target>=nums[i]||target<=nums[mid])){
                    j=mid-1;
            }
            else if(nums[mid]<nums[j]&&target>=nums[mid]&&target<=nums[j]){
                    i=mid+1;
                }
            else if(nums[mid]>nums[j]&&(target>=nums[mid]||target<=nums[j])){
                    i=mid+1;
            }
            else
                return -1;
        }
        return -1;
    }
};
