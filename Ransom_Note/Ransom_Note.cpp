class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char c:magazine)
            mp[c]++;
        for(char c:ransomNote){
            mp[c]--;
            if(mp[c]==-1)
                return false;
        }
        return true;
    }
};
