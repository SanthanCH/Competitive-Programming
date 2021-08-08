class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
      vector<int>ans,ind;
       int i,j,k=primes.size();
       ans.push_back(1);
        for(i=0;i<k;i++)
            ind.push_back(0);
        for(i=1;i<n;i++){
            ans.push_back(INT_MAX);
            for(j=0;j<k;j++)
                ans[i]=min(ans[i],primes[j]*ans[ind[j]]);
            for(j=0;j<k;j++){
                if(ans[i]==primes[j]*ans[ind[j]])
                    ind[j]++;
            }
        }
        return ans[n-1];
    }
};
