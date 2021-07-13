class Solution {
public:
    int arr[46]={0};
    int fun(int n){
        if(arr[n]!=0)
            return arr[n];
        if(n<=1)
            return 1;
        arr[n]=fun(n-1)+fun(n-2);
        return arr[n];
    }
    int climbStairs(int n) {
        return fun(n);
    }
};
