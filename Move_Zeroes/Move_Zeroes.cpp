class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=0,i,j,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]!=0)
                nums[pos++]=nums[i];
        }
        for(i=pos;i<n;i++)
            nums[i]=0;
    }
};
