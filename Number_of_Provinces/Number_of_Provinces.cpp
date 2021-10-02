class Solution {
public:
    int n;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int visited[202];
    void dfs(vector<vector<int>>& isConnected,int i){
     visited[i]=1;
    for(int j=0;j<n;j++){
        if(i!=j&&visited[j]==0&&isConnected[i][j]==1){
            isConnected[j][i]=0;
            dfs(isConnected,j);
        }
    }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n=isConnected.size();
        int i,j;
        for(i=0;i<n;i++){
                visited[i]=0;
        }
        int count=0;
        for( i=0;i<n;i++){
            if(visited[i]==0)
            {
                count++;
                dfs(isConnected,i);
            }
        }
        return count;
    }
};
