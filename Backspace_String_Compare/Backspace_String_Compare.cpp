class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result="",result1="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='#')
                result +=s[i];
            else if(result!="")
                result.pop_back();
        }
          for(int i=0;i<t.length();i++){
            if(t[i]!='#')
                result1 +=t[i];
            else if(result1!="")
                result1.pop_back();
        }
        if(result==result1)
            return true;
        return false;
    }
};
