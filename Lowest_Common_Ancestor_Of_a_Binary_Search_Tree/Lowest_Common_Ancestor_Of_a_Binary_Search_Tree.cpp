/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //if both are in left side of the current node we need to find the left sub tree
        if(p->val<root->val&&q->val<root->val)
            return lowestCommonAncestor(root->left,p,q);
          //if both are in right side of the current node we need to find the right sub tree
        if(p->val>root->val&&q->val>root->val)
            return lowestCommonAncestor(root->right,p,q);
        // if any of the value is equal to current node value or one node is in left subtree and other on right 
        //subtree we need to return the currrent node value
        else 
            return root;
        
    }
};
