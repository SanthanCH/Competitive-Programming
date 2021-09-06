class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int mx=releaseTimes[0],n=releaseTimes.size(),i;
        char c=keysPressed[0];
        for(i=1;i<n;i++){
            int curr=releaseTimes[i]-releaseTimes[i-1];
            if(curr>mx){
                mx=curr;
                c=keysPressed[i];
            }
            else if(curr==mx){
                if(c<keysPressed[i])
                    c=keysPressed[i];
            }
        }
        return c;
    }
};
