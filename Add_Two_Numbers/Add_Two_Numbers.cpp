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
    ListNode* reverse(ListNode * l){
        ListNode *prev=NULL,*next;
        while(l!=NULL){
            next=l->next;
            l->next=prev;
            prev=l;
            l=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *head1=l1,*head2=l2;
        //return head1;
        int ans=0;
        ListNode *head3=NULL,*prev;
        while(head1!=NULL || head2!=NULL){
       
        if(head1){
            ans+=head1->val;
            head1=head1->next;
        }
        if(head2){
            ans+=head2->val;
            head2=head2->next;
        }
        int val=ans%10;
        ans=ans/10;
        ListNode * temp=new ListNode();
        temp->val=val;
        if(head3==NULL)
            head3=temp;
        else
            prev->next=temp;
        prev=temp;
         }
        if(ans==1){
            ListNode*temp=new ListNode(ans);
            prev->next=temp;
            prev=temp;
        }
        prev->next=NULL;
        return (head3);
    }
};
