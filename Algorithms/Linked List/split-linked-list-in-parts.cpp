#https://leetcode.com/problems/split-linked-list-in-parts/

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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int len=0;
        ListNode* temp= root;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        vector<ListNode*> ans(k);
        int pa = len/k;
        int re = len%k;
        for(int i=0; i<k && root; i++)
        {
            ans[i]=root;
            //cout<<ans[i]->val<<" ";
            for(int j=1; j< pa+(i<re); j++)
                root=root->next;
            temp=root->next;
            root->next=NULL;
            root=temp;
        }
        return ans;
    }
};
