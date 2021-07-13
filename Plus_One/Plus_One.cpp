class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
     vector<int>q;
        int i,prev=1;
        if(nums[nums.size()-1]!=9)
        {
                 nums[nums.size()-1]++;
            return nums;
   
        }
      for(i=nums.size()-1;i>=0;i--){
          if(nums[i]+prev==10){
              q.push_back(0);
              prev=1;
          }
          else{
              q.push_back(nums[i]+prev);
              prev=0;
          }
      }
        if(prev==1)
            q.push_back(1);
       reverse(q.begin(),q.end());
        return q;
    }
};
