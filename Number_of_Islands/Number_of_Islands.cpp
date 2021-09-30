class Solution {
public:
    int m,n;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int i,int j){
        if(i<0||j<0||i>=m||j>=n)
            return false;
        return true;
    }
    void dfs(vector<vector<char>>& grid,int i,int j){
        grid[i][j]='2';
        for(int k=0;k<4;k++){
            int x=i+dx[k];
            int y=dy[k]+j;
            if(valid(x,y)&&grid[x][y]=='1')
                dfs(grid,x,y);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};
