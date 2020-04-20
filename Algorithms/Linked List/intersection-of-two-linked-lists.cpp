#https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
        {
            return NULL;
        }
        ListNode* ta = headA;
        ListNode* tb = headB;
        ListNode* end1= NULL;
        ListNode* end2= NULL;
        while(1)
        {
            if(ta==tb)
                return ta;
            if(ta->next!=NULL)
                ta=ta->next;
            else
            {
                end1=ta;
                ta=headA;
            }
            if(tb->next!=NULL)
                tb=tb->next;
            else
            {
                end2=tb;
                tb=headB;
            }
            if(end1!=NULL && end2!=NULL)
            {
                if(end1!=end2)
                    return NULL;
            }
        }
    }
};
