class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i,j=-1,n,sum=0;
        for(i=0;i<prices.size()-1;i++){
            if(prices[i]<=prices[i+1]){
                if(j==-1){
                j=prices[i];
                    //cout<<j<<"\n";
                }
            }
            else{
                if(j!=-1)
                sum+=prices[i]-j;
                j=-1;
            }
                
        }
        if(j!=-1)
            sum+=prices[prices.size()-1]-j;
        return sum;
    }
};
