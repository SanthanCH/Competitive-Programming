class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target)
                break;
            else if(numbers[i]+numbers[j]<target)
                i++;
            else
                j--;
        }
        vector<int>ans={i+1,j+1};
        return ans;
    }
};
