class Solution {
public:
    bool canWinNim(int n) {
        if(n>=3&&n%4==0)
            return false;
        return true;
    }
};
