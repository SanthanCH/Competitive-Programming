class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
      vector<vector<int>>ans;
        int i,j,flag=0,n=intervals.size();
        for(i=0;i<intervals.size();i++){
            if(intervals[i][0]>=newInterval[0])
                break;
            ans.push_back(intervals[i]);
        }
        if(n==0||i==n&&intervals[n-1][1]<newInterval[0])
        {
            intervals.push_back(newInterval);
            return intervals;
        }
        int ind=i;
        if(ind>0 &&intervals[ind-1][1]>=newInterval[0]){
            if(intervals[ind-1][1]>=newInterval[1]){
                return intervals;
            }
            else{
               ans[ind-1][1]=newInterval[1];
                for(i=ind;i<n;i++){
                    if(intervals[i][0]<=ans.back()[1])
                        ans.back()[1]=max(ans.back()[1],intervals[i][1]);
                    else
                        ans.push_back(intervals[i]);
                }
            }
        }
      else {
            ans.push_back(newInterval);
              for(i=ind;i<n;i++){
                    if(intervals[i][0]<=ans.back()[1])
                        ans.back()[1]=max(ans.back()[1],intervals[i][1]);
                    else
                        ans.push_back(intervals[i]);
                }
        }
        return ans;
        
    }
};
