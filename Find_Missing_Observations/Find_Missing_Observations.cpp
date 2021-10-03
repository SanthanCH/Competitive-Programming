class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int i,j,m=rolls.size(),sum=0,need,val;
        for(i=0;i<m;i++)
            sum+=rolls[i];
        need=mean*(m+n)-sum;
       val=(need)/n;
          vector<int>vec;
        if(need>6*n||need<n)
            return vec;
      int siz=n;
        for(i=0;i<siz;i++){
            val=(need)/n;
            need-=val;
            n--;
            vec.push_back(val);
        }
        return vec;
    }
};
