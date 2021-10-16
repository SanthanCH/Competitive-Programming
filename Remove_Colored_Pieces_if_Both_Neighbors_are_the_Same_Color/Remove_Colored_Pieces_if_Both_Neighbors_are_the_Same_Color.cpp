class Solution {
public:
    bool winnerOfGame(string colors) {
        int i,j,n=colors.length(),count1=0,count2=0;
        for(i=1;i<n-1;i++){
            if(colors[i]=='A'&&colors[i-1]=='A'&&colors[i+1]=='A')
                count1++;
             if(colors[i]=='B'&&colors[i-1]=='B'&&colors[i+1]=='B')
                 count2++;
        }
        if(count1>count2)
            return true;
        return false;
    }
};
