class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int i,j,n=values.size(),mx=-1,currmx=values[0],ind=0;
        for(i=1;i<n;i++){
            mx=max(mx,currmx+values[i]-i+ind);
            if(currmx+ind<values[i]+i){
                currmx=values[i];
                ind=i;
            }
        }
        return mx;
    }
};
