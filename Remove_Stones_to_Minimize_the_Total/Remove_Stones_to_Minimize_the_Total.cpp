class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int i,j,n=piles.size();
        priority_queue<int>pq;
        int sum=0;
        for(i=0;i<n;i++){
            pq.push(piles[i]);
            sum+=piles[i];
        }
        for(i=0;i<k;i++){
            int x=pq.top();
            if(x==1)
                break;
            pq.pop();
           // cout<<x<<"\n";
            if(x%2==0)
            {
                sum-=x/2;
                pq.push(x/2);
            }
            else{
            sum-=(x-1)/2;
            pq.push(x-(x-1)/2);
            }
        }
        return sum;
        
    }
};
