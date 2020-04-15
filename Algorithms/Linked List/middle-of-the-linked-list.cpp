#https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        struct ListNode *s_p = head;
        struct ListNode *f_p = head;
        while(f_p!=NULL && f_p->next!=NULL)
        {
            f_p = f_p->next->next;
            s_p = s_p->next;
        }
        return s_p;
        
    }
};
