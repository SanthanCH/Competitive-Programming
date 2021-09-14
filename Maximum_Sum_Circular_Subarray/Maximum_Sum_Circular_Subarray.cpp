class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int i,j,n=nums.size();
        int curr=nums[0],sum=nums[0],total=nums[0],ncurr=nums[0],nsum=min(0,nums[0]);
        for(i=1;i<n;i++){
            total+=nums[i];
            if(curr<0)
                curr=0;
            curr+=nums[i];
            sum=max(sum,curr);
            if(ncurr>0)
                ncurr=0;
             ncurr+=nums[i];
            nsum=min(nsum,ncurr);
            
        }
        //sum represents max subarray sum (contains atleast one element)
        //nsum represents negeative sum (i.e min subarray) can contain all elements (in the question they asked it should contain atleast 1 element)
      //so if the total array is min sub array(all the elements are -ve) the we need to return max subarray (or the max element of the array)
        if(total==nsum)
            return sum;
        return max(sum,total-nsum);
    }
};
