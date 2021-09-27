class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
      unordered_set<string>set;
        for(int i=0;i<emails.size();i++){
            string ans="",s=emails[i];
            int flag=0,flag1=0;
            for(int j=0;j<s.length();j++){
                if(s[j]=='@')
                    flag=0,flag1=1;
                if(s[j]=='+')
                    flag=1;
                if(flag==0){
                    if((s[j]=='.'&&flag1==1)||s[j]!='.')
                       ans+=s[j];
                    
                }
            }
            set.insert(ans);
           cout<<ans<<"\n";
            
        }
        return set.size();
    }
};
