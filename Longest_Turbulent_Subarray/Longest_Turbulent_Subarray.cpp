class Solution {
public:
    int prevvalue(int first,int second){
        if(first<second)
            return 1;
        if(first==second)
            return 0;
        return -1;
    }
    int maxTurbulenceSize(vector<int>& arr) {
        int i,j,n=arr.size(),prev,mx=2,curr=2;
        if(n==1)
            return 1;
        prev=prevvalue(arr[0],arr[1]);
        if(prev==0)
            curr=1,mx=1;
        for(i=1;i<n-1;i++){
            if(prev!=0){
               int temp=prevvalue(arr[i],arr[i+1]);
                if(temp==-1*prev)
                    curr++;
                else if(temp==prev)
                    curr=2;
                else
                    curr=1;
                prev=temp;
                    
            }
            else{
                int temp=prevvalue(arr[i],arr[i+1]);
                if(temp==1||temp==-1)
                    curr++;
                else
                    curr=1;
                prev=temp;
                    
            }
            mx=max(curr,mx);
        }
        return mx;
        
    }
};
