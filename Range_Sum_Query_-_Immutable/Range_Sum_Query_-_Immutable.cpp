class NumArray {
public:
    vector<int>arr,pre;
    NumArray(vector<int>& nums) {
        arr=nums;
        vector<int>pre1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            pre1.push_back(sum+=nums[i]);
        pre=pre1;
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return pre[right];
        else
            return pre[right]-pre[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
