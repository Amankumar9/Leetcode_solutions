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
    int pairSum(ListNode* head)
    {
        int res=0;
        ListNode *fs=head,*sl=head;
        // find middle of linkedlist
        while(fs)
        {
            sl=sl->next;
            fs=fs->next->next;
        }
        // reverse second half of linkedlist 
        ListNode *sechead, *prev=NULL, *cur=sl, *nxt=NULL;
        while(cur)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        sechead=prev;
        // find maximum sum of two nodes
        while(head && sechead)
        {
            res=max(res,head->val+sechead->val);
            head=head->next;
            sechead=sechead->next;
        }
        return res;
    }
    
    
};