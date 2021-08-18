class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1;
        int currlevel=0,sum=0;
        while(i<j){
            int k=min(height[i],height[j]);
         
              if(currlevel<=k){
                  currlevel=k;
              }
            else{
               sum+=currlevel-k;
            }
            if(k==height[i])
                i++;
            else
                j--;
          
        }
        return sum;
    }
};
