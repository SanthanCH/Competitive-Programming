class Solution {
public:
    bool ans(int count1,int count2,int count3,int sum){
         int a=0,i,n=count1+count2+count3+1;
         for(i=1;i<n;i++){
            a=a^1;
           if(sum==1){
               sum=sum+1;
                if(count1==0){
                  if(count2==0)
                      return false;
                   else{
                       if(count3%2==1)
                           return a^1;
                       else
                           return a;
                   }
               }
               count1--;
           }
           else if(sum==2){
                sum=1;
               if(count2==0){
                  if(count1==0)
                      return false;
                   else{
                       if(count3%2==1)
                           return a^1;
                       else
                           return a;
                   }
               }
               count2--;
           }
           
        }
        return true;
    }
    bool stoneGameIX(vector<int>& stones) {
        int i,j,n=stones.size();
       int count1=0,count2=0,count3=0;
        for(i=0;i<n;i++){
            if(stones[i]%3==0)
                count3++;
            else if(stones[i]%3==2)
                count2++;
            else
                count1++;
        }
        if(count1==0&&count2==0)
        return false;
        if(count1==0){
            if(count2<=2)
                return false;
            else{
                if(count3%2==1)
                    return true;
                return false;
            }
                
        }
        if(count1==0){
            if(count2<=2)
                return false;
            else{
                if(count3%2==1)
                    return true;
                return false;
            }
                
        }
        if(count2==0){
            if(count1<=2)
                return false;
            else{
                if(count3%2==1)
                    return true;
                return false;
            }
                
        }
        return ans(count1-1,count2,count3,1)||ans(count1,count2-1,count3,2);
       
        
    }
};
