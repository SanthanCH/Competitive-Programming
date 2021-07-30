class MapSum {
public:
    /** Initialize your data structure here. */
    unordered_map<string,int>mp;
    MapSum() {
        unordered_map<string,int>m;
        mp=m;
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int sum=0,i;
        for(auto it=mp.begin();it!=mp.end();it++){
           string s=it->first;
            for(i=0;i<prefix.length();i++){
                if(s[i]!=prefix[i])
                    break;
            }
            if(i==prefix.length())
                sum+=it->second;
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
