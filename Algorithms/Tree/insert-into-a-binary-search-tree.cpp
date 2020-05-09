#https://leetcode.com/problems/insert-into-a-binary-search-tree/

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
    TreeNode* form(TreeNode* root, int v)
    {
        if(!root)
        {
            return root= new TreeNode(v);
        }
        if(v <= root->val)
            root->left= form(root->left,v);
        else
           root->right=form(root->right,v);
        return root;
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
            return root= new TreeNode(val);
        form(root,val);
        return root;
    }
};
