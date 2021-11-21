class RangeFreqQuery {
public:
    unordered_map<int,vector<int>>mp;
    RangeFreqQuery(vector<int>& arr) {
        mp.clear();
         for(int i=0;i<arr.size();i++)
             mp[arr[i]].push_back(i);
    }
    
    int query(int left, int right, int value) {
      
        auto it=lower_bound(mp[value].begin(),mp[value].end(),left);
       auto it2=lower_bound(mp[value].begin(),mp[value].end(),right);
        //cout<<(it2-mp[value].begin())<<" "<<(it-mp[value].begin());
        if(it==mp[value].end())
            return 0;
        if(*it==right)
            return 1;
       if(it2!=mp[value].end()&&*it2==right){
            return ((it2-mp[value].begin())-(it-mp[value].begin()))+1;
       }
        return ((it2-mp[value].begin())-(it-mp[value].begin()));
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
