class Solution {
public:
    int dp[8][8],m,n;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int i,int j){
        if(i<0||j<0||i>=m||j>=n)
            return false;
        return true;
    }
    bool iswordexists(vector<vector<char>>& board, string word,int i,int j){
        if(word.length()==1)
            return true;
        bool ans=false;
        dp[i][j]=1;
            for(int k=0;k<4;k++){
                int x=i+dx[k];
                int y=j+dy[k];
                if(valid(x,y)&&dp[x][y]==0&&word[1]==board[x][y])
                    ans=ans||iswordexists(board,word.substr(1),x,y);
             
            }
        dp[i][j]=0;
           if(ans)
            return true;
        return false;
        
            
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]&&(iswordexists(board,word,i,j)))
                    return true;
            }
        }
        return false;
    }
};
