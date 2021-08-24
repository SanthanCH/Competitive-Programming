//using stringstream

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        char buff;
        int ra,rb,ia,ib;
        stringstream a(num1),b(num2),ans;
        a>>ra>>buff>>ia>>buff;
        b>>rb>>buff>>ib>>buff;
        ans<<ra*rb-ia*ib<<"+"<<ra*ib+rb*ia<<"i";
        return ans.str();
        //returns a string changes stringstream to string
    }
};
