class Solution {
public:
    bool valid(char c){
        if(c>='a'&&c<='z'||c>='A'&&c<='Z')
            return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
       int i=0,n=s.length(),j=n-1;
        while(i<j){
            if(!valid(s[i])){
                i++;
                continue;
            }
            if(!valid(s[j])){
                j--;
                continue;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
