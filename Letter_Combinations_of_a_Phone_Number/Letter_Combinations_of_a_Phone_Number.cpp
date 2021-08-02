class Solution {
public:
    vector<string>ans;
    void fun(string digits,int ind){
        if(ind>=digits.length())
            return;
       
        vector<string>ans1;
        int n=ans.size();
        if(digits[ind]=='2'){
            ans1.push_back("a");
            ans1.push_back("b");
            ans1.push_back("c");
        }
        else if(digits[ind]=='3'){
              ans1.push_back("d");
            ans1.push_back("e");
            ans1.push_back("f");
        }
           else if(digits[ind]=='4'){
              ans1.push_back("g");
            ans1.push_back("h");
            ans1.push_back("i");
        }
           else if(digits[ind]=='5'){
              ans1.push_back("j");
            ans1.push_back("k");
            ans1.push_back("l");
        }
           else if(digits[ind]=='6'){
              ans1.push_back("m");
            ans1.push_back("n");
            ans1.push_back("o");
        }
           else if(digits[ind]=='7'){
              ans1.push_back("p");
            ans1.push_back("q");
            ans1.push_back("r");
                ans1.push_back("s");
        }
           else if(digits[ind]=='8'){
              ans1.push_back("t");
            ans1.push_back("u");
            ans1.push_back("v");
        }
           else if(digits[ind]=='9'){
              ans1.push_back("w");
            ans1.push_back("x");
            ans1.push_back("y");
            ans1.push_back("z");
        }
        vector<string>ans2;
        if(ans.size()!=0){
        for(auto it=ans.begin();it!=ans.end();it++){
            for(int i=0;i<ans1.size();i++){
                ans2.push_back((*it)+(ans1[i]));
            }
        }
              ans=ans2;
        }
        else
            ans=ans1;
      
        fun(digits,ind+1);
            
    }
    vector<string> letterCombinations(string digits) {
        fun(digits,0);
        return ans;
        
    }
};
