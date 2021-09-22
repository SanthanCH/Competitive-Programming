class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int i,j,k,m=arr.size(),n=arr[0].size();
        for(i=m-2;i>=0;i--){
            for(j=0;j<n;j++){
                int mi=INT_MAX;
                if(j>0)
                    mi=arr[i+1][j-1];
                mi=min(mi,arr[i+1][j]);
                if(j<n-1)
                    mi=min(mi,arr[i+1][j+1]);
                arr[i][j]+=mi;
            }
        }
        int ans=INT_MAX;
        for(i=0;i<n;i++)
            ans=min(ans,arr[0][i]);
        return ans;
    }
};
