#https://leetcode.com/problems/trim-a-binary-search-tree/

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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root == NULL)
            return root;
        if(root->val<L)
        {
            root=trimBST(root->right,L,R);
        }
        else
            if(root->val>R)
            {
                root=trimBST(root->left,L,R);
            }
        if(root)
            root->left= trimBST(root->left, L, R);
        if(root)
            root->right= trimBST(root->right, L, R);
        return root;
    }
};
