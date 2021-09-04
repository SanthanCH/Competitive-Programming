class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i,j,n=nums.size();
        int pre[n],post[n];
        pre[0]=0;
        for(i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        post[n-1]=0;
        for(i=n-2;i>=0;i--){
            post[i]=post[i+1]+nums[i+1];
        }
        for(i=0;i<n;i++){
            if(pre[i]==post[i])
                return i;
        }
        return -1;
        
    }
};
