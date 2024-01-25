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
        ListNode* dummy_head=head;
        if(head->next== NULL && n==1) return NULL;
        int c=0;
        while(dummy_head){
            c++;
            dummy_head=dummy_head->next;
        }
        if(c-n==0) return head->next;
        c=c-n-1;
        dummy_head=head;
        
        while(c>0){
            dummy_head=dummy_head->next;
            c--;
        }
        ListNode* temp=dummy_head->next;
        
        
        if(n==1) 
        {
            dummy_head->next=NULL;
            return head;
        }
        dummy_head->next=dummy_head->next->next;
        delete(temp);
        return head;
    }
};