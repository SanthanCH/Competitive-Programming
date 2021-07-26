/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode*middle(vector<int>&nums,int i,int j){
        if(i>j)
            return NULL;
        int mid=(i+j)/2;
        TreeNode*head=new TreeNode(nums[mid]);
        if(i==j)
            return head;
        head->left=middle(nums,i,mid-1);
        head->right=middle(nums,mid+1,j);
        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return middle(nums,0,nums.size()-1);
        
    }
};
