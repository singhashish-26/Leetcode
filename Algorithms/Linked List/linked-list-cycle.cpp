#https://leetcode.com/problems/linked-list-cycle/

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
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode* sp=head;
        ListNode* fp=head->next;
        if(fp==NULL)
        {
            return false;
        }
        while(sp!=NULL && fp!=NULL)
        {
            if(sp==fp)
                return true;
            else
            {
                sp=sp->next;
                if(fp->next!=NULL)
                {
                    fp=fp->next->next;
                }
                else
                {
                    fp=fp->next;
                }
            }
        }
        return false;
    }
};
