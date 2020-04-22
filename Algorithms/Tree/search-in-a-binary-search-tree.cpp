#https://leetcode.com/problems/search-in-a-binary-search-tree/

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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=NULL;
        if(root->val== val)
            return root;
        if(root->val > val && root->left!=NULL)
            ans=searchBST(root->left, val);
        if(root->val < val && root->right!=NULL)
            ans=searchBST(root->right, val);
        return ans;
    }
};
