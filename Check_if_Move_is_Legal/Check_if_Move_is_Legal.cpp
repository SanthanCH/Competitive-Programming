class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
        int i,j,rowsize=board.size(),colsize=board[0].size();
        int lastind=-1;
        for(int j=cMove-1;j>=0;j--){
            if(board[rMove][j]=='.')
                break;
            if(board[rMove][j]==color){
                lastind=j;
                break;
            }
        }
        if(lastind!=-1&&abs(lastind-cMove)>1)
            return true;
        lastind=-1;
        for(int j=cMove+1;j<colsize;j++){
            if(board[rMove][j]=='.')
                break;
            if(board[rMove][j]==color){
                lastind=j;
                break;
            }
        }
          if(lastind!=-1&&abs(lastind-cMove)>1)
            return true;
        lastind=-1;
         for(int j=rMove-1;j>=0;j--){
              if(board[j][cMove]=='.')
                  break;
            if(board[j][cMove]==color){
                lastind=j;
                break;
            }
        }
        if(lastind!=-1&&abs(lastind-rMove)>1)
            return true;
        lastind=-1;
        for(int j=rMove+1;j<rowsize;j++){
            if(board[j][cMove]=='.')
                  break;
            if(board[j][cMove]==color){
                lastind=j;
                break;
            }
        }
          if(lastind!=-1&&abs(lastind-rMove)>1)
            return true;
         lastind=-1;
        for(i=rMove-1,j=cMove-1;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='.')
                break;
            if(board[i][j]==color)
            {
                lastind=i;
                break;
            }
        }
         if(lastind!=-1&&abs(lastind-rMove)>1)
            return true;
          lastind=-1;
        for(i=rMove+1,j=cMove+1;i<rowsize&&j<colsize;i++,j++){
             if(board[i][j]=='.')
                break;
            if(board[i][j]==color)
            {
                lastind=i;
                break;
            }
        }
         if(lastind!=-1&&abs(lastind-rMove)>1)
            return true;
           lastind=-1;
        for(i=rMove-1,j=cMove+1;i>=0&&j<colsize;i--,j++){
             if(board[i][j]=='.')
                break;
            if(board[i][j]==color)
            {
                lastind=i;
                break;
            }
        }
         if(lastind!=-1&&abs(lastind-rMove)>1)
            return true;
           lastind=-1;
        for(i=rMove+1,j=cMove-1;i<rowsize&&j>=0;i++,j--){
             if(board[i][j]=='.')
                break;
            if(board[i][j]==color)
            {
                lastind=i;
                break;
            }
        }
         if(lastind!=-1&&abs(lastind-rMove)>1)
            return true;
        return false;
    }
};
