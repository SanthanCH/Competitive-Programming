class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c : s)
            mp[c]++;
        vector<pair<int,char>>vec;
        for(auto it=mp.begin();it!=mp.end();it++)
            vec.push_back({it->second,it->first});
        sort(vec.begin(),vec.end());
        string ans="";
        for(auto it=vec.rbegin();it!=vec.rend();it++)
            for(int i=0;i<it->first;i++)
            ans+=(it->second);
        return ans;
    }
};
