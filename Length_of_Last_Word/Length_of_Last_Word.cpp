class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=1,n=s.length();
        while(s[n-i]==' ')
            i++;
        int count=0;
        while(i<=n&&s[n-i]!=' ')
            count++,i++;
        return count;
    }
};
