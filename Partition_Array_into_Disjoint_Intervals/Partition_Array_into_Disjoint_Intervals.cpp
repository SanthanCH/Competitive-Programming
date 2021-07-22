class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int i,j,n=nums.size();
        int pre[n+1],suf[n+1];
        int ma=-1;
        for(i=0;i<n;i++){
            ma=max(ma,nums[i]);
            pre[i]=ma;
        }
        int mi=INT_MAX;
        for(i=n-1;i>=0;i--){
            mi=min(mi,nums[i]);
            suf[i]=mi;
        }
        for(i=0;i<n-1;i++){
            if(pre[i]<=suf[i+1])
                break;
        }
        return i+1;
    }
};
