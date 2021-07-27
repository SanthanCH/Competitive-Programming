/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * curr=head;
      while(curr!=NULL){
          if(curr->val==INT_MAX)return 1;
          curr->val=INT_MAX;
          curr=curr->next;
      }  
        return 0;
    }
};
