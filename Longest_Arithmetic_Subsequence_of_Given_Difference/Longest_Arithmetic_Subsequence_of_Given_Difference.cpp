class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int i,j,k,n;
        unordered_map<int,int>mp;
       
        n=arr.size();
        int mi=1;
        for(i=0;i<n;i++){
            int x=0;
             x+=mp[arr[i]-difference];
           x++;
           mp[arr[i]]=x;
            mi=max(mi,mp[arr[i]]);
        }
        return mi;
    }

};
