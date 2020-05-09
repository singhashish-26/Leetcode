#https://leetcode.com/problems/deepest-leaves-sum/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fun(TreeNode* root, stack<pair<int,int>> &s, int d)
    {
        if(!root->left && !root->right)
        {
            while(!s.empty() && s.top().second < d)
            {
                s.pop();
            }
            if(s.empty() || s.top().second==d)
            {
                s.push({root->val,d});
            }
        }
        if(root->left)
            fun(root->left,s,d+1);
        if(root->right)
            fun(root->right,s,d+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        stack<pair<int,int>> s;
        fun(root,s,0);
        int sum=0;
        while(!s.empty())
        {
            sum+=s.top().first;
            s.pop();
        }
        return sum;
    }
};
