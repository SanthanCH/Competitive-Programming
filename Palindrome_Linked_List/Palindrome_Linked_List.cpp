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
    bool isPalindrome(ListNode* head) {
        if(!head)
            return true;
        if(!head->next)
            return true;
        if(!head->next->next)
            return head->val==head->next->val;
      ListNode*slow=head,*fast=head,*prev=NULL,*next=NULL,*first,*second;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            next=slow->next;
           
            slow->next=prev;
             if(fast==NULL)
                break;
            prev=slow;
            slow=next;
            
        }
        first=slow;
        second=next;
        if(fast!=NULL){
            first=prev;
            second=next->next;
          
        }
       //cout<<second->val<<" "<<first->val<<" "<<first->next->val<<"\n";
        int flag=0;
        while(first){
            if(first->val!=second->val) return false;
            first=first->next;
           
            second=second->next;
        }
        return true;
        
    }
};
