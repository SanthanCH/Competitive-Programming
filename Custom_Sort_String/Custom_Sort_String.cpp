class Solution {
public:
  
 
    string customSortString(string order, string str) {
        int ans=1;
          map<char,int>m;
        for(int i=0;i<order.length();i++){
            m[order[i]]=ans;
            ans++;
        }
        char c;
        int i,j,n=str.length();
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(m[str[j]]>m[str[j+1]]){
                    c=str[j];
                    str[j]=str[j+1];
                    str[j+1]=c;
                }
            }
        }
        return str;
    }
};
