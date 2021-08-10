class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j,n=nums.size(),mi=INT_MAX,ind=-1;
        //int ma=*max_element(nums.begin(),nums.end());
        for(i=n-1;i>=1;i--){
            if(nums[i]>nums[i-1])
                break;
            if(nums[i]<mi)
            {
                mi=nums[i];
                ind=i;
            }
        }
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            
        }
        else if(i==n-1){
            swap(nums[n-1],nums[n-2]);
          
        }
        else{
            int next=nums[i],ind1=i;
            for(int j=i;j<n;j++){
                if(nums[j]<=next&&nums[j]>nums[i-1])
                {
                  next=nums[j];
                    ind1=j;
                }
            }
          swap(nums[i-1],nums[ind1]);
           reverse(((nums.begin())+i),nums.end());
        }  
        
        
    }   
    
};
