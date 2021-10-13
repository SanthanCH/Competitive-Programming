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
    int sum(TreeNode *node){
        if(node==NULL)
            return 0;
        if(node->left&&(node->left->left==NULL&&node->left->right==NULL))
            return node->left->val+sum(node->right);
        return sum(node->left)+ sum(node->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root);
    }
};
