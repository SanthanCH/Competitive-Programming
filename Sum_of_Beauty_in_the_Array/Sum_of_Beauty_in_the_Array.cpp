class Solution {
public:

    int sumOfBeauties(vector<int>& nums) {
        int i,j,n=nums.size(),flag=0;
        for(i=1;i<n;i++){
            if(nums[i]<=nums[i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            return (n-2)*2;
        }
       
        int prevmax[n+1],nextmin[n+1];
        prevmax[0]=nums[0];
        nextmin[n-1]=nums[n-1];
        for(i=1;i<n;i++){
            prevmax[i]=max(prevmax[i-1],nums[i]);
        }
        for(i=n-2;i>=0;i--){
            nextmin[i]=min(nextmin[i+1],nums[i]);
        }
        int sum=0;
        for(i=1;i<n-1;i++){
            if(prevmax[i-1]<nums[i]&&nums[i]<nextmin[i+1])
                sum+=2;
            else if(nums[i-1]<nums[i]&&nums[i]<nums[i+1])
                sum++;
        }
        return sum;
    }
};
