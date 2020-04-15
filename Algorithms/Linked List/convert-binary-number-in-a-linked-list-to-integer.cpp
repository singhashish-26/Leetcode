#https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {
        ListNode* temp =head;
        int l = 0;
        while(temp != NULL)
        {
            l++;
            temp=temp->next;
        }
        temp= head;
        int ans=0;
        while(temp != NULL)
        {
            ans+=(temp->val * pow(2,--l));
            temp=temp->next;
        }
        return ans;
    }
};
