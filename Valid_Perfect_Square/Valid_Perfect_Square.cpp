class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        for(long long int i=2;i<=num/2;i++){
            if(i*i>num)
                break;
            if(i*i==num)
                return true;
        }
        return false;
    }
};
