#https://leetcode.com/problems/balanced-binary-tree/

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
    int f=0;
    int find(TreeNode* root)
    {
        if(!root)
            return 0;
        int lh= find(root->left);
        int rh= find(root->right);
        int diff= abs(lh-rh);
        if(diff>1)
            f=1;
        return 1+max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
        find(root);
        if(f==0)
            return 1;
        return 0;
    }
};
