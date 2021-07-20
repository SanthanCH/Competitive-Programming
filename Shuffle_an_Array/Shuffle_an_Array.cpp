class Solution {
public:
    vector<int>ans;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return ans;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
       vector<int> ans1 = ans;
        
        for (int i = ans.size() - 1; i >= 0; i--) {
            int r = rand() % (i+1);
            swap(ans1[i], ans1[r]);
        }
        
        return ans1;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
