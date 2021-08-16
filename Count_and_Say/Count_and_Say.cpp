class Solution {
public:
    string countAndSay(int n) {
        if(ans.size()==0)
            ans.push_back("1");
        if(ans.size()>=n)
            return ans[n-1];
        string s,prev="1";
        int i,j;
        for(j=0;j<30;j++){
            s=prev;
            string k="";
            char c='$';
            int count=0,flag=0;
            for(i=0;i<s.length();i++){
                if(c==s[i])
                    count++;
                else{
                    if(flag==1){
                    k+=to_string(count);
                    k+=c;
                    }
                    //cout<<to_string(count+'0')<<"\n";
                    c=s[i];
                    count=1;
                    flag=1;
                }
             }
             k+=to_string(count);
            k+=c;
           // cout<<k<<"\n";
            prev=k;
            ans.push_back(k);
        }
        return ans[n-1];
    }
private:
    vector<string>ans;
};
