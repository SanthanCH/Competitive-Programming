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
   unordered_map<TreeNode *,int>mp;
    int robeach(TreeNode *root){
        if(root==NULL)
            return 0;
        if(mp.find(root)!=mp.end())
            return mp[root];
      
            int ma=root->val;
            if(root->left!=NULL){
                ma+=rob(root->left->left);
                ma+=rob(root->left->right);
            }
             if(root->right!=NULL){
                ma+=rob(root->right->left);
                ma+=rob(root->right->right);
            }
            ma=max(ma,rob(root->left)+rob(root->right));
        return mp[root]=ma;
    }
    int rob(TreeNode* root) {
        return robeach(root);
    }

};
