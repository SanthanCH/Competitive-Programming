class Solution {
public:
    bool isUgly(int n) {
      for(int i=1;i<31;i++){
          if(n==1)
              return true;
          int prevn=n;
          if(n%2==0)n=n/2;
          if(n%3==0)n=n/3;
          if(n%5==0)n=n/5;
          if(prevn==n)
              return false;
      }
        return false;
    }
};
