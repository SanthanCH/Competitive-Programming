class Solution {
public:
    vector<int> partitionLabels(string s) {
    unordered_map<char,int>mp,mp1;
        vector<int>ans;
        int i,j,n=s.length(),count=0,prev=0;
        for(i=0;i<n;i++)
            mp[s[i]]++,mp1[s[i]]++;
        
        for(i=0;i<n;i++){
            if(mp1[s[i]]==mp[s[i]])
            {
                count++;
                
            }
            mp1[s[i]]--;
            if(mp1[s[i]]==0)
                count--;
            if(count==0){
                ans.push_back(i+1-prev);
                prev=i+1;
            }
        }
        return ans;
    }
};
