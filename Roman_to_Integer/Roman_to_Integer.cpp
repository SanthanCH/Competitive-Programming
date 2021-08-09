class Solution {
public:
    int romanToInt(string s) {
        int i,count=0,n=s.length();
        for(i=0;i<n-1;i++){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    count+=4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    count+=9;
                    i++;
                }
                else
                    count+=1;
                
            }
            else if(s[i]=='V')
                count+=5;
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    count+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    count+=90;
                    i++;
                }
                else{
                    count+=10;
                }
            }
            else if(s[i]=='L')
                count+=50;
            else if(s[i]=='C'){
                if(s[i+1]=='D')
                {
                    count+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    count+=900;
                    i++;
                }
                else{
                    count+=100;
                }
            }
            else if(s[i]=='D')
                count+=500;
            else
                count+=1000;
        }
        if(i!=n){
            if(s[i]=='I'){
                    count+=1;
                
            }
            else if(s[i]=='V')
                count+=5;
            else if(s[i]=='X'){
              
                    count+=10;
            }
            else if(s[i]=='L')
                count+=50;
            else if(s[i]=='C'){
           
                    count+=100;
            }
            else if(s[i]=='D')
                count+=500;
            else
                count+=1000;
        }
        return count;
    }
};
