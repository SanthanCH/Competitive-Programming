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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>result;
        vector<int>ans;
        while(root||!result.empty()){
            if(root){
                ans.push_back(root->val);
                if(root->right)
                    result.push(root->right);
                root=root->left;
            }
            else{
                root=result.top();
                result.pop();
            }
        }
        return ans;
    }
};
