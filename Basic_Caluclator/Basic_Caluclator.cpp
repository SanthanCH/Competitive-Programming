class Solution {
public:
    int calculate1(string s,int ind1,int ind2) {
        int ans=0,i,flag=0,flag1=0,j,n=ind2;
        for(i=ind1;i<n;i++){
            if(s[i]=='-')
                flag=1;
            else if(s[i]=='(')
            {
                // cout<<s[i]<<" "<<ans<<"\n";
                int count=-1;
                for(j=i;j<n;j++){
                    if(s[j]=='(')
                        count++;
                    if(s[j]==')')
                        count--;
                    if(count==-1)
                        break;
                }
                
                int ans1=calculate1(s,i+1,j);
                if(flag==1)
                    ans-=ans1;
                else
                    ans+=ans1;
                flag=0;
                i=j;
               
            }
           
            else if(s[i]>='0'&&s[i]<='9'){
                int num=0;
                for(j=i;j<n;j++){
                 if(s[j]>='0'&&s[j]<='9')
                     num=num*10+(s[j]-'0');
                 else
                     break;
                }
                if(flag==1)
                    ans-=num;
                else
                    ans+=num;
                flag=0;
               
                i=j-1;
            }
            //cout<<s[i]<<" "<<ans<<"\n";
        }
        
        return ans;
    }
    int calculate(string s){
        return calculate1(s,0,s.length());
    }
};
