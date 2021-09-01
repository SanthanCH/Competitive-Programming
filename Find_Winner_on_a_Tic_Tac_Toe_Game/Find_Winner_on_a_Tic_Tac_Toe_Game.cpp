class Solution {
public:
    bool horiz(char ch[3][3],int i){
    return (ch[i][0]==ch[i][1]&&ch[i][0]==ch[i][2]);
    }
    bool vert(char ch[3][3],int j){
    return (ch[0][j]==ch[1][j]&&ch[2][j]==ch[0][j]);
    }
    bool pri(char ch[3][3]){
    return (ch[0][0]==ch[1][1]&&ch[2][2]==ch[0][0]);
    }
    bool sec(char ch[3][3]){
    return (ch[0][2]==ch[1][1]&&ch[2][0]==ch[1][1]);
    }
    string tictactoe(vector<vector<int>>& moves) {
     char ch[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            ch[i][j]='.';
    }
     int count=1;
     for(int i=0;i<moves.size();i++){
         int j=moves[i][0];
         int k=moves[i][1];
         bool ans=false;
         if(count%2)
             ch[j][k]='X';
         else
             ch[j][k]='O';
         if(j==k)
             ans=ans||pri(ch);
         if(j+k==2)
             ans=ans||sec(ch);
         ans=ans||horiz(ch,j);
         ans=ans||vert(ch,k);
         if(ans){
             if(count%2)
                 return "A";
             return "B";
         }
         count++;
             
     }
     if(moves.size()==9)
         return "Draw";
     return "Pending";
    }
};
