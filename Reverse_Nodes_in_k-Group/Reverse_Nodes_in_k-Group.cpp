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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* head1=head;
        int count=0,flag=0;
        while(head1!=NULL)
        {
            head1=head1->next;
            count++;
        }
        head1=head;
        ListNode*prev1=NULL,*newtail=NULL,*newhead=NULL,*prevnewtail=NULL;
        while(count>=k){
            int k1=k,flag2=0;
            ListNode*prev=NULL,*next,*temp;
       
             while(k1--){
                     next=head1->next;
                     head1->next=prev;
                     prev=head1;
                 if(flag2==0){
                     newtail=head1;
                     flag2=1;
                 }
                 head1=next;
             }
             newtail->next=next;
            newhead=prev;
          if(flag==0)
          {
              head = newhead;
              flag=1;
          }
        if(prevnewtail!=NULL){
            prevnewtail->next=newhead;
        }
            prevnewtail=newtail;
            head1=next;
            count-=k;
        }
        //cout<<count<<"\n";
        return head;
    }
};
