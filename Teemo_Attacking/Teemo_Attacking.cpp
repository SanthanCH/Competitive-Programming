class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int i,j,n=timeSeries.size();
        int tot=duration;
        for(int i=1;i<n;i++){
            if(timeSeries[i-1]+duration>timeSeries[i]){
                tot-=(duration-timeSeries[i]+timeSeries[i-1]);
                 tot+=duration;
                //cout<<tot<<"\n";
            }
            else{
                tot+=duration;
            }
        }
        return tot;
    }
};
