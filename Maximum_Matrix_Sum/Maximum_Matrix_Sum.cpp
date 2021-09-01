class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long int sum=0,mi=INT_MAX,count=0;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=abs(matrix[i][j]);
                if(mi>abs(matrix[i][j]))
                    mi=abs(matrix[i][j]);
                if(matrix[i][j]<0)
                    count++;
            }
        }
        if(count%2==0)
            return sum;
        return sum-(mi*2);
    }
};
