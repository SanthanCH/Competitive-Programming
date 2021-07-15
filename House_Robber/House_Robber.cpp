class Solution {
public:
    int arr[405];
    int fun(vector<int>nums,int n,int i){
        if(i>=n)
            return 0;
        if(arr[i]!=-1)
            return arr[i];
        arr[i]=max(nums[i]+fun(nums,n,i+2),fun(nums,n,i+1));
        return arr[i];
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            arr[i]=-1;
       
        return fun(nums,nums.size(),0);
      
       
    }
};
