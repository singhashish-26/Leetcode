#https://leetcode.com/problems/convert-bst-to-greater-tree/

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
    int mx=0;
    void greaterTree(TreeNode* root)
    {
        if(!root)
            return;
        greaterTree(root->right);
        root->val+=mx;
        mx=root->val;
        greaterTree(root->left);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        greaterTree(root);
        return root;
    }
};
