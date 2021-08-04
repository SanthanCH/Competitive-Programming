class Solution {
public:
   
    bool canJump(vector<int>& nums) {
        int mi=nums.size()-1;
        int i,j,n=nums.size();
        bool ans=true;
        for(i=n-2;i>=0;i--){
            if(nums[i]+i>=mi){
                mi=i;
                ans=true;
            }
            else
            ans=false;
        }
        return ans;
    }
   
};
