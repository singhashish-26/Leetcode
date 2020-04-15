#https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp= head;
        ListNode* temp0 = temp;
        ListNode* temp1 = temp->next;
        while(temp!=NULL)
        {
            if(temp==head)
            {
                temp->next= NULL;
                temp=temp1;
            }
            else
            {
                temp1=temp1->next;
                temp->next=temp0;
                temp0=temp;
                temp= temp1;
            }
        }
        head = temp0;
        return head;
    }
};
