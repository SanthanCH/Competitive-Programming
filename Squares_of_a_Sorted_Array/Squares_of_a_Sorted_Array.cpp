class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        deque<int>q;
        
        while(i<=j){
            if(abs(nums[i])>abs(nums[j]))
                q.push_front(nums[i]*nums[i++]);
            else
                q.push_front(nums[j]*nums[j--]);
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop_front();
        }
        return ans;
    }
};
