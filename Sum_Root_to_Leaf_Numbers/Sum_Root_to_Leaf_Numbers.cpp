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
    void sum(TreeNode * root,int s){
      
        if(root->left==NULL&&root->right==NULL){
            ans+=s*10+root->val;
            //out<<s<<"\n";
            return;
        }
        if(root->left!=NULL)
        sum(root->left,s*10+root->val);
        if(root->right!=NULL)
        sum(root->right,s*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        ans=0;
        sum(root,0);
        return ans;
    }
};
