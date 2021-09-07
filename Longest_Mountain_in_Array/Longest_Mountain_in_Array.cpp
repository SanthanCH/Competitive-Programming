class Solution {
public:
    int longestMountain(vector<int>& A) {
      int i,n=A.size(),j,curr=1,mx=0,flag=0;
      for(i=1;i<n;i++){
          if(A[i]>A[i-1]){
              curr++;
              flag=1;
          }
          else if(curr>1&&A[i]<A[i-1]){
              int k=0;
          for(j=i;j<n;j++)
          {
              if(A[j]>=A[j-1])
                  break;
              k++;
          }
              
              mx=max(mx,curr+k);
                  i=j;
              curr=1;
              if(j==n)
                  break;
              if(A[j]>A[j-1])
                  curr++;
              
          }
          else{
              curr=1;
          }
      }
        return mx;
    }
};
