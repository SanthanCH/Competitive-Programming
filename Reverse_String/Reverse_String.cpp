//Two pointer Approach
class Solution {
public:
    void reverseString(vector<char>& s) {
    int n=s.size();
    int count=0,pos=n-1,i;
        char c;
    for(i=0;count<n;i++){
        c=s[pos];
        s[pos]=s[i];
        s[i]=c;
        pos--;
        count+=2;
    }
        /* int i=0,j=s.size()-1;
              while(i<j){
              char temp=s[j];
              s[j]=s[i];
              s[i]=temp;
              i++;
              j--; 
              }*/
    }
};
