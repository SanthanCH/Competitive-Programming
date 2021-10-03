class Solution {
public:
    int minimumMoves(string s) {
        int i,j,count=0,n=s.length();
        for(i=0;i<n;i++){
           if(s[i]=='X'){
               count++;
               if(i+1<n)
               s[i+1]='O';
               if(i+2<n)
               s[i+2]='O';
           }
        }
        return count;
        
    }
};
