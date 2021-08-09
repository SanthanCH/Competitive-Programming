class Solution {
public:
    string addStrings(string num1, string num2) {
        int i,j,n1=num1.length(),n2=num2.length();
        i=n1-1;
        j=n2-1;
        int ans=0;
        string soln="";
        while(i>=0&&j>=0){
            int a=num1[i]-'0';
            int b=num2[j]-'0';
            int ans1=a+b+ans;
            ans=ans1/10;
            soln=char(ans1%10+'0')+soln;
            i--;
            j--;
        }
        while(i>=0){
            int a=num1[i]-'0';
            int ans1=a+ans;
            ans=ans1/10;
            soln=char(ans1%10+'0')+soln;
            i--;
        }
        while(j>=0){
            int b=num2[j]-'0';
            int ans1=b+ans;
            ans=ans1/10;
            soln=char(ans1%10+'0')+soln;
            j--;
        }
        if(ans)
            soln='1'+soln;
        return soln;
    }
};
