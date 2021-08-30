class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int maxm=m,maxn=n;
        for(int i=0;i<ops.size();i++){
            maxm=min(maxm,ops[i][0]);
            maxn=min(maxn,ops[i][1]);
        }
        return (maxm)*(maxn);
    }
};
