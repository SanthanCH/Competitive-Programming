class Solution {
public:
    int reverse(int x) {
        long long int ans=0;
        int k=abs(x);
        while(k>0){
            ans=ans*10+k%10;
            k=k/10;
        }
        if(x<0)ans*=-1;
        if(ans>INT_MAX||ans<INT_MIN)return 0;
        return ans;
    }
};
