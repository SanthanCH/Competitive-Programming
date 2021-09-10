class Solution {
public:
    int fib(int n) {
      if(n<=1)
          return n;
    int prev=0,curr=1,count=2;
      while(count++<=n)
      {
         int temp=prev;
          prev=curr;
          curr+=temp;
      }
        return curr;
    }
};
