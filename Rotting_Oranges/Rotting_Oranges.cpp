class Solution {
public:
    bool valid(int i,int j,int m,int n){
        if(i<0||j<0||i>=m||j>=n)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int dx[]={0,1,-1,0};
        int dy[]={1,0,0,-1};
        int m=grid.size(),n=grid[0].size(),i,j;
        int times[m][n];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]==2){
                    times[i][j]=0;
                    q.push({i,j});
                }
                else
                {
                    times[i][j]=-1;
                }
            }
        }
        while(!q.empty()){
            pair<int,int>temp=q.front();
            q.pop();
            int ind1=temp.first;
            int ind2=temp.second;
            for(int k=0;k<4;k++){
                i=ind1+dy[k];
                j=ind2+dx[k];
                if(valid(i,j,m,n)&&grid[i][j]==1&&times[i][j]==-1){
                    times[i][j]=times[ind1][ind2]+1;
                    q.push({i,j});
                }
            }
        }
        int mx=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]==1){
                    if(times[i][j]==-1)
                    {
                        mx=times[i][j];
                        break;
                    }
                    else
                        mx=max(mx,times[i][j]);
                }
            }
            if(mx==-1)
                break;
        }
        return mx;
    }
};
