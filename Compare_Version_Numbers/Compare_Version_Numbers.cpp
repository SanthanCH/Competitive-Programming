class Solution {
public:
    int compareVersion(string version1, string version2) {
      vector<int>vec1,vec2;
        string ans="";
        int i;
        for(i=0;i<=version1.length();i++){
            if(i==version1.length()||version1[i]=='.'){
                vec1.push_back(stoi(ans));
                ans="";
                continue;
            }
            ans+=version1[i];
        }
         for(i=0;i<=version2.length();i++){
            if(i==version2.length()||version2[i]=='.'){
                vec2.push_back(stoi(ans));
                ans="";
                continue;
            }
            ans+=version2[i];
        }
      
        for(i=0;i<min(vec1.size(),vec2.size());i++){
            if(vec1[i]<vec2[i])
                return -1;
            if(vec1[i]>vec2[i])
                return 1;
        }
        if(i==vec2.size()){
           
            for(;i<vec1.size();i++)
                if(vec1[i]!=0)return 1;
            return 0;
        }
         if(i==vec1.size()){
            for(;i<vec2.size();i++)
                if(vec2[i]!=0)return -1;
            return 0;
        }
        return 0;
    }
};
