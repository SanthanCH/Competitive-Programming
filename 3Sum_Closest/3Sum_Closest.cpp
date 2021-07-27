class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,k,ans=INT_MAX,n=nums.size();
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                int x=nums[i]+nums[j]+nums[k];
                if(ans==INT_MAX)
                    ans=x;
                else if(abs(x-target)<=abs(target-ans))
                    ans=x;
                if(x==target)
                    break;
                else if(x>target)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};
