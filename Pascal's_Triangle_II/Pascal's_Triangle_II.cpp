class Solution {
public:
    vector<int> getRow(int rowIndex) {
           int i,j,k,n;
        vector<int>ans2;
        ans2.push_back(1);
        for(i=2;i<=rowIndex+1;i++){
            vector<int>ans1;
            ans1.push_back(1);
           for(j=1;j<i-1;j++){
            ans1.push_back(ans2[j]+ans2[j-1]);
           }
            ans1.push_back(1);
          ans2=ans1;
        }
        return ans2; 
    }
};
