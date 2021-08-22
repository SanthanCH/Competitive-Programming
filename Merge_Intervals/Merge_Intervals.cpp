class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<pair<int,int>>vec;
        int i;
        for(i=0;i<intervals.size();i++)
            vec.push_back({intervals[i][0],intervals[i][1]});
        sort(vec.begin(),vec.end());
        vector<pair<int,int>>result;
        result.push_back(vec[0]);
        for(i=0;i<vec.size();i++){
            if(vec[i].first<=result.back().second){
                result.back().second=max(result.back().second,vec[i].second);
            }
            else
                result.push_back(vec[i]);
        }
        vector<vector<int>>ans;
        for(i=0;i<result.size();i++){
            vector<int>ans1;
            ans1.push_back(result[i].first);
                ans1.push_back(result[i].second);
            ans.push_back(ans1);
        }
        return ans;
    }
};
