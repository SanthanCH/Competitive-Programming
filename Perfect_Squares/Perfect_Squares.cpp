class Solution {
public:
    int numSquares(int n) {
            int squares[101];
        for(int i=1;i<=100;i++)
            squares[i-1]=i*i;
              
        static vector<int>ans{0};
        // used static only creates it once every time if ans[n] is present we need to return it only for the        //first function call it creates a vector
        int i,j;
        if(ans.size()>n)
            return ans[n];
        //ans.push_back(0);
        for(i=ans.size();i<=n;i++){
            ans.push_back(INT_MAX);
            for(j=0;j<100;j++){
                if(squares[j]>i)
                    break;
                ans[i]=min(ans[i],ans[i-squares[j]]+1);
            }
        }
        return ans[n];
    }
};
