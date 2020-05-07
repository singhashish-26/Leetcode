#https://leetcode.com/problems/longest-univalue-path/

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
    int fun(TreeNode* root, int &mx)
    {
        if(!root)
            return 0;
        int l = fun(root->left, mx);
        int r = fun(root->right, mx);
        int cl=0, cr=0;
        if(root->left && root->left->val == root->val)
            cl+= l+1;
        if(root->right && root->right->val == root->val)
            cr+= r+1;
        mx = max(mx,cl+cr);
        return max(cl,cr);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(!root)
            return 0;
        int mx=0;
        fun(root, mx);
        return mx;
    }
};
