class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length()!=B.length())
            return false;
        int i;
          unordered_map<char,int>mp,mp1;
           for(i=0;i<A.length();i++)
                mp[A[i]]++,mp1[B[i]]++;
        if(A==B){
            for(auto it=mp.begin();it!=mp.end();it++){
                if((it->second)>1)
                    return true;
            }
            return false;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second!=mp1[it->first])
                return false;
        }
        int count=0;
        for(i=0;i<A.length();i++){
            if(A[i]!=B[i])
                count++;
        }
        if(count==2)
            return true;
        return false;
   
    }
};
