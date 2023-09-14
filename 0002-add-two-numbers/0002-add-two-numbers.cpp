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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0),*ans=&dummy;
        int extra=0;
        while(l1||l2||extra){
            int sum=(l1?l1->val:0)+(l2?l2->val:0)+extra;
            extra=sum/10;
            ans->next=new ListNode(sum%10);
            ans=ans->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        return dummy.next;
    }
};