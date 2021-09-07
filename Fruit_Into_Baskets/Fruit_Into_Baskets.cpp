 class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int mx=1,prevcount=1,currcount=1,fi=fruits[0],se=-1,n=fruits.size(),i,j;
        for(i=1;i<n;i++){
          if(fruits[i]==fruits[i-1]){
              prevcount++;
              currcount++;
          }
        else{
              
                if(se==fruits[i]){
                    swap(fi,se);
                     currcount=currcount+1;
                }
                else{
                    se=fi;
                    currcount=prevcount+1;
                }
                fi=fruits[i];
                prevcount=1;
          }
            mx=max(mx,currcount);
            
        }
        return mx;
    }
};
