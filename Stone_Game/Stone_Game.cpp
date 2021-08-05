class Solution {
public:
    int maxdiff(vector<int>piles,int i,int j){
        if(i>j)
            return 0;
        if(dp[i][j]!=0)
            return dp[i][j];
        int left=piles[i];
         int l=maxdiff(piles,i+1,j);
        int right=piles[j];
        int r=maxdiff(piles,i,j-1);
        return dp[i][j]=max(left-l,right-r);
    }
    bool stoneGame(vector<int>& piles) {
      
        int n=piles.size();
if(maxdiff(piles,0,n-1)>0)
    return true;
else
    return false;
        
    }
private :
    int dp[502][502];
};
