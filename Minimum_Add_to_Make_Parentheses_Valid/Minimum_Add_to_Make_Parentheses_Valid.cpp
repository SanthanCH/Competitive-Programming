class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int i,n=s.length(),count=0;
        for(i=0;i<n;i++){
            if(s[i]=='(')
                st.push(s[i]);
            else{
                if(!st.empty()&&st.top()=='(')
                    st.pop();
                else
                    count++;
            }
        }
        return count+st.size();
    }
};
