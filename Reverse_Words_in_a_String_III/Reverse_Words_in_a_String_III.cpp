class Solution {
public:
    int nextspace(int i,string s){
        int j;
        for( j=i;j<s.length();j++)
        {
            if(s[j]==' ')
                break;
        }
        return j;
    }
    string reverseWords(string s) {
        int i=0,j,n=s.length();
        while(i<n){
            j=nextspace(i,s);
            int k=j;
            j--;
            while(i<j)
            swap(s[i++],s[j--]);
            i=k+1;
        }
        return s;
    }
};
