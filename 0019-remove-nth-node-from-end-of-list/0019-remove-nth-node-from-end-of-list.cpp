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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        if(l==1&&n==1) return NULL;
        l=l-n;
        if(l==0)return head->next;
        temp=head;
        while(l>1){
            temp=temp->next;
            l--;
        }
        ListNode* dummy=temp->next;
        temp->next=temp->next->next;
        delete(dummy);
        return head;
    }
};