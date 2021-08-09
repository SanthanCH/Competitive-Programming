class Solution {
public:
    bool isValid(string s) {
        int n=s.length(),i,j;
        stack<char>st;
        for(i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if(s[i]=='}'){
                if(st.empty()||st.top()!='{')
                    return false;
                st.pop();
            }
             else if(s[i]==']'){
                if(st.empty()||st.top()!='[')
                    return false;
                st.pop();
            }
             else if(s[i]==')'){
                if(st.empty()||st.top()!='(')
                    return false;
                st.pop();
            }
        }
        if(st.empty())
        return true;
        return false;
    }
};
