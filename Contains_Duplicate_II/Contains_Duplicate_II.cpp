class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i,j,n=nums.size();
        unordered_map<int,int>mp;
        for(i=0;i<n;i++){
            if(mp[nums[i]]!=0&&i+1-mp[nums[i]]<=k)
                return true;
            mp[nums[i]]=i+1;
                
        }
        return false;
    }
};
