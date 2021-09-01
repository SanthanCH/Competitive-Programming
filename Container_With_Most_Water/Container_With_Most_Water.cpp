class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0,i=0,j=height.size()-1;
        while(i<j){
            mx=max(mx,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return mx;
    }
};
