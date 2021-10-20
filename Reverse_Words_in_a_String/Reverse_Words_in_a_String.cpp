class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        int i,n=s.length();
        for(i=0;i<n;i++){
            if(s[i]==' '){
                if(temp.size()>0&&ans.size()>0)
                    ans=temp+" "+ans;
                else if(temp.size()>0)
                    ans=temp;
                temp="";
            }
            else
                temp+=s[i];
        }
        if(temp.size()>0&&ans.size()>0)
                    ans=temp+" "+ans;
         else if(temp.size()>0)
                    ans=temp;
        return ans;
    }
};
