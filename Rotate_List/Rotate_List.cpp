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
    int size(ListNode * head){
        int s=0;
        while(head!=NULL){
            s++;
            head=head->next;
        }
        return s;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return NULL;
        int n=size(head);
        k=k%n;
        if(k==0)
            return head;
        int count=1;
        ListNode *head1,*curr=head;
        while(count<n-k){
            count++;
            curr=curr->next;
            
        }
        head1=curr->next;
        curr->next=NULL;
        curr=head1;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=head;
        return head1;
        
    }
};
