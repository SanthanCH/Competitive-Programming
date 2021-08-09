class Solution {
public:
    bool isPalindrome(string s) {
        stack<int>st;
        int i,j,n=s.length();
        for(i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
            if(s[i]>='0'&&s[i]<='9'|| s[i]>='a'&&s[i]<='z')
                st.push(s[i]);
        }
        for(i=0;i<n;i++){
            
            if(s[i]>='0'&&s[i]<='9'||s[i]>='a'&&s[i]<='z'){
                if(st.top()!=s[i])
                    return false;
                st.pop();
            }
        }
        return true;
    }
};
