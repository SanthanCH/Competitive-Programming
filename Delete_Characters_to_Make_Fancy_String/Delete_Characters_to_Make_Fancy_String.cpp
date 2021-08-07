class Solution {
public:
    string makeFancyString(string s) {
        int i,j,n=s.length();
        if(n<=2)
            return s;
        string ans="";
        ans=s[0];
        ans+=s[1];
        for(i=2;i<n;i++){
            if((s[i]==s[i-1]&&s[i]==s[i-2]))
              j+=1;
            else
                ans+=s[i];
        }
        return ans;
    }
};
