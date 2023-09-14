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
        while(temp){
            l++;
            temp=temp->next;
        }
        
        if(l==1 && n==1) 
        { return NULL;}
        
        l=l-n;
        
        if(l==0)//1st node has to be deleted
        {
            return head->next;
        }
        
        
        ListNode* temp2=head;
        
        while(head){
            if(l==1){
                head->next=head->next->next;
                return temp2;
            }
            head=head->next;
            l--;
        }
        return temp2;
    }
};