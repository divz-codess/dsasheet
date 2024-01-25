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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(-1);
        dummy->next=head;
        ListNode* nh=dummy;
        while(nh!=NULL && nh->next!=NULL){
            if(nh->next->val==val){
                ListNode *temp=nh->next;
                nh->next= temp->next;
                delete(temp);}
            else
            {nh=nh->next;}
        }
        return dummy->next; //this ensures that if the first node is the one that needs to be deleted
        // still the output is correct, but if we will simply return head, it will just lead to 
        // pointing to the deleted linked list node
    }
};