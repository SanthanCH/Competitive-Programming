class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int i=0,j=nums.size()-1,mid,n=nums.size();
       while(i<=j){
           //cout<<i<<" "<<j<<"\n";
           mid=(i+j)/2;
           bool ans=false;
           if(mid+1<n&&nums[mid]==nums[mid+1])
               ans=true;
           if(mid-1>=0&&nums[mid]==nums[mid-1])
               ans=true;
           if(!ans)
               return nums[mid];
           if(mid%2==0){
               if(nums[mid]==nums[mid+1])
               i=mid+1;
               else
                  j=mid;
           }
            else{
               if(nums[mid]==nums[mid-1])
                   i=mid+1;
               else
                   j=mid;
           }
       }
        return nums[mid];
    }
};
