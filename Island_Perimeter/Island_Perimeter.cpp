class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int i,int j,int m,int n){
        if(i<0||j<0||i>=m||j>=n)
            return false;
        return true;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
      int ans=0;
      int i,j,m=grid.size(),n=grid[i].size();
     for(i=0;i<m;i++){
         for(j=0;j<n;j++){
             if(grid[i][j]==1){
             int count=4;
             for(int k=0;k<4;k++){
             int x=i+dx[k];
            int y=j+dy[k];
                if(valid(x,y,m,n)&&grid[x][y]==1)
                    count--;
             }
             ans+=count;
             }
         }
     }
        return ans;
    }
};
