class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int i,j,n=arr.size();
        map<int,int>mp;
        for(i=0;i<n;i++)
            mp[arr[i]]++;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==0) continue;
            if(it->first>=0){
            if(it->second>mp[2*(it->first)]){
                return false;
            }
             mp[2*(it->first)]-=it->second;
            }
            else{
                if((it->first)%2==-1)
                    return false;
             if(it->second>mp[(it->first)/2])
                return false;
            mp[(it->first)/2]-=it->second; 
            }
        }
        return true;
    }
};
