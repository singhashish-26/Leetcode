#https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0, sum=0;
        ListNode* ans= new ListNode();
        ListNode* temp= ans;
        while(l1!=NULL || l2!=NULL)
        {
            sum=0;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            if(sum>=10)
                carry=1;
            else
                carry=0;
            sum%=10;
            temp->next= new ListNode(sum);
            temp=temp->next;
        }
        if(carry>0)
            temp->next= new ListNode(carry);
        return ans->next;
    }
};
