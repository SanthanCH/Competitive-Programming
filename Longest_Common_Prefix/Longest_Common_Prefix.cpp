class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1;i<strs.size();i++){
            string ans="";
            for(int j=0;j<min(s.length(),strs[i].length());j++){
                if(s[j]==strs[i][j])
                    ans+=s[j];
                else
                   break;
            }
            s=ans;
        }
        return s;
    }
};
