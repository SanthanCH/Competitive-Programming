class Solution {
public:
    vector<string> generateParenthesis(int n) {
        generate("",n,0);
        return ans;
     
    }
private:
    vector<string>ans;
    void generate(string ans1,int n,int m){
        if(n==0&&m==0)
            ans.push_back(ans1);
        if(n>0){
            generate(ans1+'(',n-1,m+1);
        }
        if(m>0)
            generate(ans1+")",n,m-1);
    }
};
