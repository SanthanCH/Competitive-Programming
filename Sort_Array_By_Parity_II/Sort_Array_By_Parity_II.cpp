class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evpos=0,oddpos=1,i,j,n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0&&nums[i]%2==1){
                swap(nums[oddpos],nums[i--]);
                oddpos+=2;
            }
            else if(i%2==1&nums[i]%2==0){
                swap(nums[evpos],nums[i--]);
                evpos+=2;
            }
            
        }
        return nums;
    }
};
