/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1&&!l2)
            return l1;
        ListNode * head=new ListNode();
        ListNode * prev=NULL;
        int ans=0;
        while(l1!=NULL||l2!=NULL){
              ListNode * temp=new ListNode();
            if(l1==NULL){
                temp->val=l2->val;
                l2=l2->next;
            }
            else if(l2==NULL){
                 temp->val=l1->val;
                l1=l1->next;
            }
            else if(l1->val<=l2->val){
                temp->val=l1->val;
                l1=l1->next;
            }
            else{
                temp->val=l2->val;
                l2=l2->next;
            }
            if(ans==0){
                head=temp;
                prev=temp;
                ans=1;
            }
            else{
                prev->next=temp;
                prev=temp;
            }
            
        }
        prev->next=NULL;
        return head;
    }
};
