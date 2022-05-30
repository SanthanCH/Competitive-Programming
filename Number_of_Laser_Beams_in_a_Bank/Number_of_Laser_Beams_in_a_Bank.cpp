class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int i,j,n=bank.size(),prev=0,ans=0;
       for(i=0;i<n;i++){
           int count=0;
           for(j=0;j<bank[i].size();j++){
               if(bank[i][j]=='1')
                   count++;
           }
           ans+=prev*count;
           if(count!=0)
           prev=count;
           
       }
        return ans;
    }
};
