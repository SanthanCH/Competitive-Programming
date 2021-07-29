class Solution {
public:
    int m,n;
    int isvalid(int i,int j){
        return (i>-1&&j>-1&&i<m&&j<n);
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        m=mat.size();
        n=mat[0].size();
        int i,j;
         vector<vector<int>> ans(m,vector<int>(n,-1));
        queue<pair<int,int>>q;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++)
            {
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
    
        while(!q.empty()){
            pair<int,int>ans1=q.front();
            q.pop();
            int f=ans1.first,s=ans1.second;
            if(isvalid(f-1,s)&&ans[f-1][s]==-1){
                ans[f-1][s]=ans[f][s]+1;
                q.push({f-1,s});
            }
            if(isvalid(f+1,s)&&ans[f+1][s]==-1){
                ans[f+1][s]=ans[f][s]+1;
                q.push({f+1,s});
            }
            if(isvalid(f,s-1)&&ans[f][s-1]==-1){
                ans[f][s-1]=ans[f][s]+1;
                q.push({f,s-1});
            }
            if(isvalid(f,s+1)&&ans[f][s+1]==-1){
                ans[f][s+1]=ans[f][s]+1;
                q.push({f,s+1});
            }
            
        }
        
        return ans;
      
    }
};
