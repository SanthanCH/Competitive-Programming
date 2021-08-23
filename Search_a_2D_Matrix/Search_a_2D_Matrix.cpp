class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size(),n=matrix[0].size();
    int i=0,j=m-1,mid=(i+j)/2,mid1;
    while(i<=j){
        mid=(i+j)/2;
        if(matrix[mid][0]<=target&&matrix[mid][n-1]>=target)
            break;
        else if(matrix[mid][0]>target)
            j=mid-1;
        else if(matrix[mid][n-1]<target)
            i=mid+1;
    }
        i=0,j=n-1;
        while(i<=j){
            mid1=(i+j)/2;
        if(matrix[mid][mid1]==target)
            return true;
        else if(matrix[mid][mid1]>target){
            j=mid1-1;
        }
        else if(matrix[mid][mid1]<target)
            i=mid1+1;
        }
        return false;
    }
};
