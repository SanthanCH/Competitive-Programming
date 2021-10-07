class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i,j,n=s.length(),n1=p.length();
        vector<int>ans;
       unordered_map<char,int>mp,mp1;
        for(i=0;i<n1;i++){
            mp[p[i]]++;
            mp1[s[i]]++;
        }
        if(mp==mp1)
            ans.push_back(0);
        for(i=n1;i<n;i++){
            mp1[s[i-n1]]--;
            if(mp1[s[i-n1]]==0)
                mp1.erase(s[i-n1]);
            mp1[s[i]]++;
            if(mp==mp1)
                ans.push_back(i-n1+1);
        }
      
        return ans;
    }
};
