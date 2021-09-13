/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root||!root->left)
            return root;
        queue<Node*>q;
        q.push(root->left);
        q.push(root->right);
        Node *prev=NULL;
        int total=0,level=1;
        while(!q.empty()){
            Node*temp=q.front();
            q.pop();
            total++;
           if(temp->left){
                q.push(temp->left);
                q.push(temp->right);
           }
            
            if(prev)
                prev->next=temp;
            prev=temp;
            if(total==level*2){
                level*=2;
                total=0;
                prev=NULL;
                temp->next=NULL;
                
            }
            
        }
        return root;
        
    }
};
