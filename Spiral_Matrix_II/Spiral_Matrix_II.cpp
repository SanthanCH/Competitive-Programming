class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int curr=1,left=0,top=0,bottom=n-1,right=n-1;
        vector<vector<int>>mat(n,vector<int>(n));
        int i=0,j=0;
        while((left<=right)&&(top<=bottom)){
            while(j<=right)
                mat[i][j++]=curr++;
            j--;
            i++;
            top++;
            while(i<=bottom)
                mat[i++][j]=curr++;
            i--;
            j--;
            right--;
            while(j>=left)
                mat[i][j--]=curr++;
            i--;
            j++;
            bottom--;
            while(i>=top)
                mat[i--][j]=curr++;
            i++;
            j++;
            left++;
         }
        return mat;
    }
};
