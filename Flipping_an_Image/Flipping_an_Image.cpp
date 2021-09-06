class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
       int i,j,m=A.size(),n=A[0].size();
        for(i=0;i<m;i++)
            reverse(A[i].begin(),A[i].end());
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                A[i][j]=A[i][j]^1;
        return A;
    }
};
