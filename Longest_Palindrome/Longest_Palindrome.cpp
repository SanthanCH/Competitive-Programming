class Solution {
public:
    int longestPalindrome(string s) {
        int len=0,flag=0,i,n=s.length();
        unordered_map<char,int>mp;
        for(i=0;i<n;i++)
            mp[s[i]]++;
        for(auto it=mp.begin();it!=mp.end();it++){
            len+=((it->second)/2)*2;
            if((it->second)%2)
                flag=1;
        }
        return len+flag;
    }
};
