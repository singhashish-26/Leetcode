#https://leetcode.com/problems/add-two-numbers-ii/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2,ans;
        int c=0;
        ListNode* temp= l1;
        while(temp!=NULL)
        {
            s1.push(temp->val);
            temp=temp->next;
        }
        temp=l2;
        while(temp!=NULL)
        {
            s2.push(temp->val);
            temp=temp->next;
        }
        int sum;
        while(!s1.empty() && !s2.empty())
        {
            sum=s1.top()+s2.top();
            s1.pop();
            s2.pop();
            if(c==1)
                sum+=1;
            if(sum>=10)
                c=1;
            else
                c=0;
            ans.push(sum%10);
        }
        while(!s1.empty())
        {
            sum=s1.top()+c;
            if(sum>=10)
                c=1;
            else
                c=0;
            ans.push(sum%10);
            s1.pop();
        }
        while(!s2.empty())
        {
            sum=s2.top()+c;
            if(sum>=10)
                c=1;
            else
                c=0;
            ans.push(sum%10);
            s2.pop();
        }
        if(c==1)
        {
            ans.push(c);
        }
        ListNode* ahead;
        ListNode* fnode;
        ahead = new ListNode();
        ahead->val= ans.top();
        ahead->next=NULL;
        ans.pop();
        temp=ahead;
        while(!ans.empty())
        {
            fnode = new ListNode();
            fnode->val= ans.top();
            fnode->next=NULL;
            temp->next=fnode;
            temp=temp->next;
            ans.pop();
        }
        return ahead;
    }
};
