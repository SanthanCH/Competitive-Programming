class Solution {
public:
    int sum1(int n){
        if(n<10)
            return n;
        return (n/10)+(n%10);
        
    }
    int digits(int n){
        int sum=0;
        while(n>0){
        sum+=n%10;
        n/=10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int sum=0,i;
        for(i=0;i<s.length();i++){
        int c=(s[i]-'a'+1);
        sum+=sum1(c);
        }
        k-=1;
        while(k--){
        sum=digits(sum);
        }
        return sum;
    }
};
