#https://leetcode.com/problems/next-greater-node-in-linked-list/

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        stack<pair<int,int>>s;
        ListNode* temp = head;
        for(int i=0; temp!=NULL; temp=temp->next)
        {
            while(!s.empty() && temp->val > s.top().first)
            {
                ans[s.top().second]=temp->val;
                s.pop();
            }
            ans.push_back(0);
            s.push({temp->val,i++});
        }
        return ans;
    }
};
