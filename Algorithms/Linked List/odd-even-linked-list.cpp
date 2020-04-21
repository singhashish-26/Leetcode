#https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* temp1 = head, *temp2= head->next, *p1=head,*p2=temp2;
        while(temp1->next!=NULL && temp2->next!=NULL)
        {
            temp1->next= temp1->next->next;
            temp2->next= temp2->next->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=p2;
        return p1;
    }
};
