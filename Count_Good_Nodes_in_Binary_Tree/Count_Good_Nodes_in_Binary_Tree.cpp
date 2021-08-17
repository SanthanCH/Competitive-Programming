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
    int count(TreeNode*root,int ma){
        if(!root)
            return 0;
        if(root->val>=ma)
             return 1+count(root->left,root->val)+count(root->right,root->val);
         
        else
              return count(root->left,ma)+count(root->right,ma);
    }
    int goodNodes(TreeNode* root) {
        return count(root,root->val);
    }
};
