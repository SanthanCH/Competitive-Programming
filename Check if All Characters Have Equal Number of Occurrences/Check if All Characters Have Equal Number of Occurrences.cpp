class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        int i,j=-1;
        for(i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(j==-1)
                j=it->second;
            else if(j!=it->second)
                return false;
        }
        return true;
    }
};
