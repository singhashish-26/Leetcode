#https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> m;
    int f=0;
    
    void fun(TreeNode* root, int k)
    {
        if(root==NULL || f==1)
            return;
        if(m.find(root->val)!=m.end())
        {
            f=1;
            return;
        }
        else
        {
            m.insert({k-root->val,root->val});
        }
        fun(root->left, k);
        fun(root->right, k);
        return;
    }
    
    bool findTarget(TreeNode* root, int k) {
        fun(root,k);
        return f;
    }
};
