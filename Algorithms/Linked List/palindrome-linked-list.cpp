#https://leetcode.com/problems/palindrome-linked-list/

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
    ListNode *temp2;
    bool fun(ListNode* temp1)
    {
        if(temp1==NULL)
            return true;
        bool x= fun(temp1->next) & (temp2->val==temp1->val);
        temp2=temp2->next;
        return x;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* temp1= head;
        temp2=head;
        return fun(temp1);
    }
};
