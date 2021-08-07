class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        bool dp[n+2];
       
        for(int i=0;i<=n;i++)
            dp[i]=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<wordDict.size();j++){
                string s2=wordDict[j];
                int len=s2.length();
                if(i-len+1==0||((i-len+1>0)&&dp[i-len]))
                {   //cout<<"hi "<<i<<" "<<j<<" "<<len<<"\n";
                    string s1=s.substr(i-len+1,len);
                    //cout<<s1<<" "<<s2<<"\n";
                    if(s1==s2){
                        if(i-len+1==0)
                            dp[i]=true;
                        else{
                            dp[i]=dp[i-len];
                        }
                    }
                        
                }
                if(dp[i]){
                    break;
                }
            }
        }
        return dp[n-1];
    }
};
