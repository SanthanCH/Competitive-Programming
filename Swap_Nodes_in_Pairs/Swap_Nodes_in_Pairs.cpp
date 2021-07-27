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
    ListNode* swapPairs(ListNode* head) {
        int flag=0;
        ListNode *prev,*curr=head,*next,*next1;
        while(curr!=NULL){
          
                next=curr->next;
                if(next)
                next1=curr->next->next;
                if(flag==0){
                    flag=1;
                    if(next){
                    head=next;
                    next->next=curr;
                    curr->next=next1;
                    prev=curr;
                    
                    }
                }
                else{
                    if(next){
                        prev->next=next;
                        next->next=curr;
                        curr->next=next1;
                        prev=curr;
                        
                    }
                }
             curr=curr->next;
               
                
                
        }
        return head;
    }
};
