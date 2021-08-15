class Solution {
public:
    int minSwaps(string s) {
        int i,j,k,n=s.length(),m,count=0;
        for(i=0;i<n;i++){
         if(s[i]=='1')
             count++;
        }
        if(n%2==0&&count!=n/2){
            return -1;
        }
        if(n%2!=0){
            if(count==n/2||count==(n/2)+1)
                int h=5;//just for not condition
            else
                return -1;
        }
        int count2=0,count3=0,count4=0,count5=0;
        for(i=0;i<n;i+=2)
        {
               if(s[i]!='1')
                   count2++;
               if(s[i]!='0')
                   count3++;
        }
        
         for(i=1;i<n;i+=2)
        {
               if(s[i]!='1')
                   count4++;
               if(s[i]!='0')
                   count5++;
        }
         int ans=INT_MAX;
        int count0=n-count;
        if(n%2==0||n%2==1&&count==n/2+1)
       ans=min(ans,count2);
        else
             ans=min(ans,count4);
        if(n%2==0||n%2==1&&count0==n/2+1)
       ans=min(ans,count3);
        else
             ans=min(ans,count5);
        if(n%2==0)
            ans=min(ans,min(count4,count5));
        
        return ans;
    }
};
