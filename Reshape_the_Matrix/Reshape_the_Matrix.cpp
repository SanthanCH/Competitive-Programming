class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size(),i,j;
        if(m*n!=r*c)
            return mat;
        vector<vector<int>>newmat(r,vector<int>(c));
        int a=0,b=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(b==c){
                    a+=1;
                    b=0;
                }
                newmat[a][b++]=mat[i][j];
                    
            }
        }
        return newmat;
    }
};
