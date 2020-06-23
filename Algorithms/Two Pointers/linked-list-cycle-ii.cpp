#https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode *slow= head;
        ListNode* fast= head;
        int f=0;
        do
        {
            slow=slow->next;
            if(fast->next!=NULL)
                if(fast->next->next!=NULL)
                    fast=fast->next->next;
            else
                fast=NULL;
            if(slow==fast)
            {
                f=1;
                break;
            }
        }
        while(slow!=NULL && fast!=NULL);
        if(f==0)
            return NULL;
        slow=head;
        while(slow!=fast && slow!=NULL && fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return fast;
    }
};
