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

//Or you can directly pass elements  into a vector by inorder traversal so the elements will be present in sorted 
//order and we can do a two pointer to find two sum
class Solution {
public:
    bool ispossible(TreeNode*root1,TreeNode*root2,int k){
       if(root1==NULL||root2==NULL)
           return false;
        if(root1!=root2&&root1->val+root2->val==k)
            return true;
        if(root1->val+root2->val>k){
            return ispossible(root1->left,root2,k)||ispossible(root1,root2->left,k);
        }
        else if(root1->val+root2->val<k){
            return ispossible(root1,root2->right,k)||ispossible(root1->right,root2,k);
        }
        else{
            return  ispossible(root1->left,root2,k)||ispossible(root1,root2->left,k)||ispossible(root1,root2->right,k)||ispossible(root1->right,root2,k);
        }
      return false;
        
    
        
    }
    bool findTarget(TreeNode* root, int k) {
        return ispossible(root,root,k);
    }
};
