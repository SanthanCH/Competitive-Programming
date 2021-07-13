class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return (max_element(nums.begin(),nums.end()))-nums.begin();
      //max_element returns iterator pointing to the maximum element in the array
      //takes a little bit more time than other solution
    }
};
