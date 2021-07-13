class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int ans=0;
        //a^b^c^a^b =c
        //elem refers to the each number presennt in the array
        for(auto &elem :nums)
            ans=ans^elem;
    return ans;
    }
};
