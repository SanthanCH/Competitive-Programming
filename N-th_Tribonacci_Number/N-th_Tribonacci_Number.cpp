class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        int curr=1,prev=1,prev2=0,count=2;
        while(count++<n){
            int temp=prev2;
            prev2=prev;
            prev=curr;
            curr+=prev2+temp;
        }
        return curr;
    }
};
