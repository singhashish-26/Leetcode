#https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l2==NULL)
        {
            return l1;
        }
        ListNode* temp1;
        ListNode* temp2;
        ListNode* temp3;
        temp3=l2;
        while(l1!=NULL && l2!=NULL)
        {
            while(l2->next!=NULL && l2->next->val < l1->val)
            {
                l2=l2->next;
            }
            if(l1->val >= l2->val)
            {
                temp2=l2->next;
                l2->next=l1;
                temp1=l1->next;
                l1->next=temp2;
                l1=temp1;
                l2= l2->next;
                continue;
            }
            if(l1->val < l2->val)
            {
                temp1=l1->next;
                l1->next=l2;
                l2=l1;
                l1=temp1;
                temp3=l2;
            }
            
        }
        l2=temp3;
        return l2;
    }
};
