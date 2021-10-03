class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int siz=original.size();
        vector<vector<int>>vec;
        if(m*n!=siz)
            return vec;
        vector<vector<int>> arr( m , vector<int> (n, 0));
        int j=0,k=0,i;
        for(i=0;i<siz;i++){
            if(j==n)
            {
                j=0;
                k++;
            }
            arr[k][j++]=original[i];
        }
        return arr;
    }
};
