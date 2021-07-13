class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        unordered_map<int,int>m;
        for(auto i:nums1)
        {
            //By default if value is not present in the mapit is zero
            m[i]++;
        }
        for(auto i:nums2){
            if(m[i]>0)
                nums.push_back(i);
            m[i]--;
        }
        return nums;
    }
};
