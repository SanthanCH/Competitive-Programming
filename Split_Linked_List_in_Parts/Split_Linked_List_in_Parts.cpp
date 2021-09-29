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
    int length(ListNode* head){
        if(!head)
            return 0;
        return 1+length(head->next);
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=length(head),i,j;
        ListNode*head1=head,*head2;
         vector<ListNode*>ans;
        if(n<=k){
           
            for(i=0;i<k;i++){
                ans.push_back(head1);
                if(head1!=NULL)
                    head1=head1->next;
                if(ans.back())
                 ans.back()->next=NULL;
            }
            return ans;
        }
        int count=n%k,count1=n/k;
        for(int i=0;i<k;i++){
            ans.push_back(head1);
            for(int j=0;j<count1-1;j++)
                head1=head1->next;
            head2=head1;
            head1=head1->next;
            if(count-->0){
                head1=head1->next;
                head2=head2->next;
            }
            head2->next=NULL;
        }
        return ans;
    }
};
