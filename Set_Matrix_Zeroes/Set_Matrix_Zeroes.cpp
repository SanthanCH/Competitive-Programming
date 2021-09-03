class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>row,col;
        int i,j,m=matrix.size(),n=matrix[0].size();
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it=row.begin();it!=row.end();it++){
            for(j=0;j<n;j++)
                matrix[*it][j]=0;
        }
        for(auto it=col.begin();it!=col.end();it++){
            for(i=0;i<m;i++)
                matrix[i][*it]=0;
        }
    }
};
