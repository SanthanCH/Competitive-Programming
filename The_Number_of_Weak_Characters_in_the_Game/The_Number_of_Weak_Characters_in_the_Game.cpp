class Solution {
public:
  
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int fi=0,sec=0,n=properties.size(),i,j;
        map<int,int>mp;
        for(i=0;i<n;i++){
            mp[properties[i][0]]=max(mp[properties[i][0]],properties[i][1]);
        }
        int prevmax=0;
       for(auto it=mp.rbegin();it!=mp.rend();it++){
           int temp=it->second;
           it->second=prevmax;
           prevmax=max(prevmax,temp);
       }
        for(i=0;i<n;i++){
            if(properties[i][1]<mp[properties[i][0]])
                fi++;
        }
        
        return fi;
        
    }
};
