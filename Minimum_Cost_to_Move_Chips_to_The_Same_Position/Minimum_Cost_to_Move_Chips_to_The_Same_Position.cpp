class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evsum=0,oddsum=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2)
                oddsum++;
            else
                evsum++;
        }
        return min(evsum,oddsum);
    }
};
