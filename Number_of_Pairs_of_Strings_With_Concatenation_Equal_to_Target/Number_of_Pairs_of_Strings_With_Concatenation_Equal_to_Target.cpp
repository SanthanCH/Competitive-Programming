class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int i,j,n=nums.size(),count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j&&nums[i]+nums[j]==target)
                    count++;
            }
        }
        return count;
    }
};
