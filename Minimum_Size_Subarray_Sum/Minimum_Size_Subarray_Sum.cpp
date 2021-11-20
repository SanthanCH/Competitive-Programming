class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i,j,n=nums.size(),sum=0;
       int prev[n],next[n];
       for(i=0;i<n;i++)
       {
           prev[i]=0;
           next[i]=0;
           sum+=nums[i];
       }
        if(sum<target)
            return 0;
        i=0;
        j=0;
        int mi=n,currsum=0;
        while(j<=n){
            //cout<<i<<" "<<j<<" "<<currsum<<"\n";
            if(currsum>=target)
            {
                mi=min(mi,j-i);
                currsum-=nums[i];
                i++;
            }
            else{
                if(j==n)
                    break;
                currsum+=nums[j];
                j++;
            }
        }
        return mi;
    }
};
