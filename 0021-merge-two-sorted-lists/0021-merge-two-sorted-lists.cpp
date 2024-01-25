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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=new ListNode(-1);
        ListNode *head2=head;
        while(list1 !=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                ListNode *nn=new ListNode(list1->val);
                head->next=nn;
                head=head->next;
                list1=list1->next;
            }
            else{
                ListNode *nn=new ListNode(list2->val);
                head->next=nn;
                head=head->next;
                list2=list2->next;
            }
        }
        if(list1==NULL && list2==NULL){
            return head2->next;
        }
        else if(list1==NULL){
            head->next=list2;
            
        }
        else if(list2==NULL){
            head->next=list1;
            
        }
        return head2->next;
    }
};