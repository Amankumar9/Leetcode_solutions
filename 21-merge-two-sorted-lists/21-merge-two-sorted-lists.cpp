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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* tp=head;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                tp->next=l1;
                tp=tp->next;
                l1=l1->next;
            }
            else
            {
                tp->next=l2;
                tp=tp->next;
                l2=l2->next;
            }
        }
        if(l1)
        {
            while(l1)
            {
                tp->next=l1;
                tp=tp->next;
                l1=l1->next;
            }
        }
        if(l2)
        {
            while(l2)
            {
                tp->next=l2;
                tp=tp->next;
                l2=l2->next;
            }
        }
        return head->next;
    }
};