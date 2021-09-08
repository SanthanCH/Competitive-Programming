class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.length(),curr=0,i;
        int arr[n];
        for(i=n-1;i>=0;i--){
            curr+=shifts[i];
           curr=curr%26;
            arr[i]=curr;
        }
        for(i=0;i<n;i++){
            s[i]=char((s[i]-'a'+arr[i])%26+'a');
        }
        return s;
    }
};
