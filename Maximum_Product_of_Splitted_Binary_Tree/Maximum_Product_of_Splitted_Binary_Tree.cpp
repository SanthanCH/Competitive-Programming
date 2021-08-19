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
 static int mod=1e9+7;//represents 10 power 9 +7;
class Solution {
public:
    long long int ans;
    int total;
   
    int sum(TreeNode*root){
        if(!root)
            return 0;
        return root->val+sum(root->left)+sum(root->right);
    }
    long long int fun(TreeNode *root){
        
        if(!root)
            return 0;
       long long int ltot= fun(root->left);
       long long int rtot=fun(root->right);
      if(ans<((ltot)*((total-ltot))))
        ans=((ltot)*((total-ltot)));
     if(ans<((rtot)*((total-rtot))))
        ans=((rtot)*((total-rtot)));
       
        return ltot+rtot+root->val;
    }
    
    int maxProduct(TreeNode* root) {
        total=sum(root);
        fun(root);
        return ans%mod;
    }

};
