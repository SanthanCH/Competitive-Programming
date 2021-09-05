class Solution {
public:
    vector<vector<int>>visited;
    
    pair<int,int> fun(vector<vector<int>>& land,int i,int j){
        visited[i][j]=1;
        if(i+1<land.size()&&land[i+1][j]==1){
            return fun(land,i+1,j);
        }
        else if(j+1<land[0].size()&&land[i][j+1]==1)
            return fun(land,i,j+1);
        return {i,j};
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
      vector<vector<int>>ans;
        int m=land.size(),n=land[0].size(),i,j;
        visited.clear();
        for(i=0;i<m;i++){
            vector<int>y;
            for(j=0;j<n;j++){
               y.push_back(0);
            }
            visited.push_back(y);
        }
        int pre=0;
        for(i=0;i<m;i++){
            pre=0;
            for(j=0;j<n;j++){
                if(land[i][j]==1&&visited[i][j]==0){
                    if(pre==1)
                       visited[i][j]=1;
                    else{
                        pair<int,int>temp=fun(land,i,j);
                        vector<int>z;
                        z.push_back(i);
                         z.push_back(j);
                          z.push_back(temp.first);
                          z.push_back(temp.second);
                        ans.push_back(z);
                        pre=1;
                        
                    }
                    
                }
                else if(land[i][j]==1&&visited[i][j]==1)
                    pre=1;
                else if(land[i][j]==0)
                    pre=0;
            }
        }
        return ans;
    }
};
