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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p=NULL,*slow=head, *fast=head;
        if(head==NULL || head->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL){
            p=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        p->next=slow->next;
        delete(slow);
        return head;
    }
};