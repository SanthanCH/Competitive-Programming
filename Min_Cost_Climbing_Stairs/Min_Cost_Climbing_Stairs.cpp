class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int curr=cost[cost.size()-2],next=cost.back();
        for(int i=cost.size()-3;i>=0;i--){
            int ans=min(curr,next);
            next=curr;
            curr=ans+cost[i];
        }
        return min(next,curr);
    }
};
