class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int currodd=0,ans=0,n=nums.size();
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2)
                currodd++;
            mp[currodd]++;
            ans+=mp[currodd-k];
        }
        return ans;
    }
};
