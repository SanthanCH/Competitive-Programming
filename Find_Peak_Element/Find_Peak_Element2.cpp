class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //Binary Search Approach
        //As any element is not equal to any of its neighbours there will be a atleast one peak element definitely
        //ex: [1,2,3,4,5,x];
        //here if (x<5) then 5 is peak element and x is greater than 5,then x is peak element Remaining elements       there is no peak element
        //ex2:[x,5,4,3,2,1]:
        //here if(x<5) then 5 is peak element
        //if(x>5) then x is peak element
        //if x is in middle 
        //ex:[1,2,3,x,5,4]
        //here if(x<3) then 3 is peak
        //if(3<x<5) i.e x=4 then 5 is peak
        //if(x>5) then x is peak
        int l = 0, r = nums.size();
        if(r == 1)
            return 0;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(mid + 1 < nums.size() && nums[mid] < nums[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        
        //so here we assumed that every thing is in ascending order &continue if everything form left to mid is in ascending order if its not in ascending(i.e nums[mid]>nums[mid+1]) then there will be a peak element from left to mid so we can change the right limit to mid
        //if all the elements are in descnding order then right value becomes to 0 at final and returns first element for ex:[6,5,4,3,2,1]
        return l;
    }
};
