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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*>q;
        int flag=0,currlevel=0;
        q.push_back(root);
        vector<vector<int>>ans;
        if(!root)
            return ans;
        while(q.size()!=0){
            if(flag==0){
                vector<int>ans1;
                int len=q.size();
           for(int i=0;i<len;i++){
               TreeNode*temp=q.front();
               q.pop_front();
               ans1.push_back(temp->val);
               if(temp->left)
               q.push_back(temp->left);
               if(temp->right)
               q.push_back(temp->right);
           }
                ans.push_back(ans1);
                flag=1;
            }
            else{
            vector<int>ans1;
                int len=q.size();
           for(int i=0;i<len;i++){
               TreeNode*temp=q.back();
               q.pop_back();
               ans1.push_back(temp->val);
                 if(temp->right)
               q.push_front(temp->right);
               if(temp->left)
               q.push_front(temp->left);
             
           }
                ans.push_back(ans1);
                flag=0;
            }
        }
        return ans;
        
    }
};
