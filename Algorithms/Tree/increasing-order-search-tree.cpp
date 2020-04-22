#https://leetcode.com/problems/increasing-order-search-tree/

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
    TreeNode* prev;
    void inOrder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inOrder(root->left);
        root->left=NULL;
        prev->right=root;
        prev=root;
        inOrder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = new TreeNode(0);
        prev=ans;
        inOrder(root);
        return ans->right;
    }
};
