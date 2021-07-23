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
    bool present(TreeNode * root){
        if(root==NULL)
        return false;
        if(root->val==1)
            return true;
        return (present(root->left)||present(root->right));
    }
    TreeNode* dfs(TreeNode* root){
        if(present(root)==false)
            return NULL;
        root->left=dfs(root->left);
        root->right=dfs(root->right);
        return root;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return dfs(root);
    }
};
