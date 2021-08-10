class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int i,j,k,n=s.length();
        for( i=0;i<n;i++){
            if(s[i]=='1')
                break;
        }
       // cout<<i<<"\n";
        int totsteps=0,flag=0;
        while(i<n){
            j=i;
            int count=0,count1=0;
            for(;i<n;i++)
            {
                if(s[i]=='0')
                    count++;
                else
                    count1++;
                if(count>=count1){
                    totsteps+=count1;
                    i++;
                    cout<<"hi\n";
                    break;
                }
            }
            //cout<<count<<" "<<count1<<" "<<i<<"\n";
            if(count<count1){
                flag=1;
                break;
            }
           
        }
        if(flag==0)
            return totsteps;
        
        i=j;
        //cout<<i<<"\n";
        int totsteps0=0,totsteps1=0;
        for(;i<n;i++){
            if(s[i]=='0')
                totsteps1++;
            else
                totsteps0++;
        }
        return totsteps+min(totsteps0,totsteps1);
        
        
    }
};
