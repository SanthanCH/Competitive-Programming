class Solution {
public:
    string breakPalindrome(string palindrome) {
        int i,j,n=palindrome.size(),k,flag=0;
        if(n==1)
            return "";
        for(i=0;i<n/2;i++){
            if(palindrome[i]!='a'){
                flag=1;
                palindrome[i]='a';
                break;
            }
        }
        if(flag)
            return palindrome;
        palindrome[n-1]='b';
        return palindrome;
    }
};
