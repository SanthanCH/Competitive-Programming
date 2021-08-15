class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,start=0,j,n=s.length(),maxlen=0;
        unordered_map<char,int>mp;
        for(i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                start=max(start,mp[s[i]]+1);
            }
            mp[s[i]]=i;
            maxlen=max(maxlen,i-start+1);
        }
        return maxlen;
    }
};
