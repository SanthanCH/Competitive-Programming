class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i:changed){
            mp[i]++;
            if(i==0)
                count++;
        }
        vector<int>ans;
        for(int i=0;i<count/2;i++)
            ans.push_back(0);
        if(count%2==1){
            vector<int>ans2;
            return ans2;
        }
        sort(changed.begin(),changed.end());
        unordered_map<int,int>mp1;
        for(int i=0;i<changed.size();i++){
            if(mp1[changed[i]]>0){
                mp1[changed[i]]--;
                continue;
            }
            if(changed[i]!=0){
            if(mp[changed[i]]>0&&mp[changed[i]*2]>0){
               mp[changed[i]*2]--;
                mp1[changed[i]*2]++;
                ans.push_back(changed[i]);
            }
            else if(mp[changed[i]]>0&&mp[changed[i]*2]==0){
                vector<int>ans1;
                return ans1;
            }
            }
        }
        return ans;
    }
};
