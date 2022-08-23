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
    bool isPalindrome(ListNode* head) {
        ListNode* sl=head, *fs=head;
        while(fs && fs->next)
        {
            sl=sl->next;
            fs=fs->next->next;
        }
        ListNode* prev=NULL, *curr=sl, *nxt=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        ListNode *i1=head,*i2=prev;
        while(i2)
        {
            if(i1->val!=i2->val)
                return false;
            i1=i1->next;
            i2=i2->next;
        }
        return true;
    }
};