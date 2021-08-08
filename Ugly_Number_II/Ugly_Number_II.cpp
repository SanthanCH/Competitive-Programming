class Solution {
public:
    int nthUglyNumber(int n) {
        int next2,next3,next5,ind2=0,ind3=0,ind5=0;
        vector<int>ans;
        ans.push_back(1);
        int count=1;
        while(count<=n){
            next2=ans[ind2]*2;
            next3=ans[ind3]*3;
            next5=ans[ind5]*5;
            int next=min(next2,min(next3,next5));
            ans.push_back(next);
            //Should not use else if because they can be equal if they are equal we need to increase both                 //indexes ex: 2*5,5*2 comes twice so we need to add both ind2,ind5 here
            if(next==next2)
            {
                
                ind2++;
            }
            if(next==next3)
            {
               
                ind3++;
            }
            if(next==next5){
             
                ind5++;
            }
            //cout<<ans[count]<<"\n";
            count++;
        }
        return ans[n-1];
    }
};
