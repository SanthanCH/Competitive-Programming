class Solution {
public:
     bool isvowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        return false;
    }
    long long countVowels(string word) {
        long long int i,j,n=word.length(),count=0,v=0,count1=0;
        vector<int>vec;
        for(i=0;i<n;i++){
            if(isvowel(word[i])){
                v++;
            }
            
            count1+=v;
        }
        count+=count1;
        int v1=v;
        if(isvowel(word[0])){
                v--;
                count1=(count1-(n));
              
        }
       
        for(i=1;i<n;i++){
            if(isvowel(word[i])){
                v--;
                 count+=count1;
                count1=(count1-(n-i));
              
               
            }
            else{
                count+=count1;
            }
        }
        return count;
    }
};
