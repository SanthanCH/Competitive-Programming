class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int flag=0;
        string ans=num1;
        int k=0,i=0;
        if(ans[i]=='-')
            flag=1,i++;
        while(ans[i]!='+'){
            k=k*10+(ans[i++]-'0');
        }
        if(flag)
        k*=-1;
        int j=0;
        i++;
        flag=0;
        if(ans[i]=='-')
            flag=1,i++;
        while(ans[i]!='i'){
            j=j*10+(ans[i++]-'0');
        }
         if(flag)
        j*=-1;
        ans=num2;
        int k1=0;
        i=0;
         flag=0;
        if(ans[i]=='-')
            flag=1,i++;
        while(ans[i]!='+'){
            k1=k1*10+(ans[i++]-'0');
        }
         if(flag)
        k1*=-1;
        int j1=0;
        i++;
         flag=0;
        if(ans[i]=='-')
            flag=1,i++;
        while(ans[i]!='i'){
            j1=j1*10+(ans[i++]-'0');
        }
         if(flag)
        j1*=-1;
        return to_string(k*k1-(j*j1))+"+"+to_string((k*j1 + j*k1))+"i";
    }
};
