class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>=s.length())
            return false;
        unordered_set<string>ans;
        string sub,mai;
        mai=s.substr(0,k);
        ans.insert(mai);
        for(int i=k;i<s.length();i++){
            sub=mai.substr(1);
            sub+=s[i];
            mai=sub;
            ans.insert(mai);
        }
        if(pow(2,k)==ans.size())
            return true;
        return false;
    }
};
