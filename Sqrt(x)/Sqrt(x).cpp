class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        long long i;
        for( i=1;i*i<=x;i++){
            
        }
        if(i*i!=x)
            return i-1;
        return i;
    }
};
