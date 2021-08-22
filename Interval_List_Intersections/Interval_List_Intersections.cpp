class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i=0,j=0,n=firstList.size(),m=secondList.size();
        vector<vector<int>>ans;
        while(i<n&&j<m){
            if(firstList[i][0]>secondList[j][1])
                j++;
            else if(firstList[i][1]<secondList[j][0])
                i++;
          
            else{
                 vector<int>result;
                result.push_back(max(firstList[i][0],secondList[j][0]));
                 result.push_back(min(firstList[i][1],secondList[j][1]));
                ans.push_back(result);
                if(firstList[i][1]<=secondList[j][1])
                    i++;
                else
                    j++;
            }
        }
        return ans;
    }
};
