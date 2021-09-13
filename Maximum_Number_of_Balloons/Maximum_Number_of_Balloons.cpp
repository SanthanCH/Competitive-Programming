class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(char c:text)
            mp[c]++;
        int mi=min(mp['b'],mp['a']);
        mi=min(mi,mp['n']);
        mi=min(mi,mp['l']/2);
        mi=min(mi,mp['o']/2);
        return mi;
        
    }
};
