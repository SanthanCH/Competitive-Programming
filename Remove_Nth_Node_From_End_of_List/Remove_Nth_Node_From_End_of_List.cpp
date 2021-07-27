 /* here curr refers to the first node and nPlusOneNodesFromCurris n plus nodes 
        far from the curr node so if it becomes null we need to delete the next value 
        of curr */
        /* EDGE CASES 
         deleting the first node and second node 
         if its first node nPlusOneNodesFromCurr will be NULL when n=1
         and if its second node n will be 0 and nPlusOneNodesFromCurr will be NULL
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head,*nPlusOneNodesFromCurr=head;
        n++;
        while(nPlusOneNodesFromCurr!=NULL&&n--){
            nPlusOneNodesFromCurr=nPlusOneNodesFromCurr->next;
        }
        if(nPlusOneNodesFromCurr==NULL&&n==1)
         return head->next;
     
        while(nPlusOneNodesFromCurr!=NULL){
            curr=curr->next;
           nPlusOneNodesFromCurr=nPlusOneNodesFromCurr->next;     
        }
        curr->next=curr->next->next;
        
        return head;
    }
};
