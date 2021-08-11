class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
         unordered_map<string,char>mp1;
        int i,j,k,ind=0;
        string word="";
        for(i=0;i<=s.length();i++){
            if(i==s.length()||s[i]==' '){
                if(mp.find(pattern[ind])!=mp.end()&&mp[pattern[ind]]!=word)
                    return false;
                if(mp1.find(word)!=mp1.end()&&mp1[word]!=pattern[ind])
                    return false;
                mp[pattern[ind]]=word;
                mp1[word]=pattern[ind];
                word="";
                ind++;
            }
            else{
                word=word+s[i];
            }
        }
        if(ind!=pattern.length())
            return false;
        return true;
    }
};
