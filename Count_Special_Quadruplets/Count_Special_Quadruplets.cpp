class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size(),i,j,k,l,count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    for(l=k+1;l<n;l++){
                        if(nums[i]+nums[j]+nums[k]==nums[l])
                            count++;
                    }
                }
            }
        }
        return count;
    }
};
