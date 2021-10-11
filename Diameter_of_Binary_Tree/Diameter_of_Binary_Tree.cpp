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
    int ans=0;
    int len(TreeNode * root){
        if(!root)
            return 0;
        int l=len(root->left)+1;
        int r=len(root->right)+1;
        ans=max(l+r-1,ans);
        return max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int i=len(root);
        return ans-1;
    }
};
