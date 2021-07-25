class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int i,j,n=num.length(),k,h,prev=0;
        string ans="";
        for(i=0;i<n;i++){
            k=(num[i]-'0');
            j=change[k];
            h=max(k,change[k]);
            ans+=char('0'+h);
            if(j<k&&i==0){
                prev=0;
            }
            else if(j<k){
                //cout<<"hi";
                if(prev==1)
                    break;
                prev=0;
            }
            else if(j==k){
                if(prev==0)
                    prev=0;
                else
                    prev=1;
            }
            else{
                prev=1;
            }
        }
        i++;
        for(;i<n;i++){
            k=(num[i]-'0');
            ans+=char('0'+k);
        }
        return ans;
    }
};
