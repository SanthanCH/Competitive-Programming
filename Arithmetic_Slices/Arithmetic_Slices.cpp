class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<=2)
            return 0;
        int prevdiff=A[1]-A[0],diff,len=2,ans=0;
        for(int i=2;i<A.size();i++){
            if(A[i]-A[i-1]==prevdiff){
                len++;
                ans+=len-2;
            }
            else{
                prevdiff=A[i]-A[i-1];
                len=2;
            }
        }
        return ans;
    }
};
