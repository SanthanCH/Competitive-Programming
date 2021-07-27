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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB)
            return NULL;
        ListNode *currA=headA,*currB=headB;
        int count=0;
        while(count<=2){
            if(currA==currB)
                return currA;
            if(currA==NULL){
                currA=headB;
                count++;
            }
            else
                currA=currA->next;
            if(currB==NULL){
                currB=headA;
                count++;
            }
            else
                currB=currB->next;
        }
        return NULL;
    }
};
