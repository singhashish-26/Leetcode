#https://leetcode.com/problems/maximum-depth-of-binary-tree/

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
    int mx=0,d=0;
    void fun(TreeNode* root)
    {
        if(!root)
            return;
        int p=d;
        d++;
        fun(root->left);
        fun(root->right);
        mx = max(mx,d);
        d=p;
    }
    
    int maxDepth(TreeNode* root) {
        fun(root);
        return mx;
    }
};
