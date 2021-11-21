class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i,j,n=plants.size(),sum=0,cur=capacity;
        for(i=0;i<n;i++){
            sum++;
            cur-=plants[i];
            if(i+1<n&&cur<plants[i+1]){
                sum+=2*(i+1);
                cur=capacity;
            }
            
        }
        return sum;
    }
};
