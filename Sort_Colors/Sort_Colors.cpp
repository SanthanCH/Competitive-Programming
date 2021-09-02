class Solution {
public:
    void sortColors(vector<int>& nums) {
     int low=0,n=nums.size(),high=n-1,i;
     for(i=0;i<n;i++){
         if(i>high)
             break;
         if(nums[i]==0){
             swap(nums[low++],nums[i]);
         }
         else if(nums[i]==2){
             swap(nums[i--],nums[high--]);
         }
     }
    }
};
