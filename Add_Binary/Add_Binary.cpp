class Solution {
public:
    string addBinary(string a, string b) {
        int i,ans=0,n1=a.length()-1,n2=b.length()-1;
        string fina="";
        while(n1>=0||n2>=0||ans==1){
            if(n1>=0){
                ans+=a[n1]-'0';
                      n1--;}
            if(n2>=0){ 
                ans+=b[n2]-'0';
                n2--;
            }
            fina=char(ans%2+'0')+fina;
            ans=ans/2;
        }
        return fina;
    }
};
