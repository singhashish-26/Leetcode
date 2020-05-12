#https://leetcode.com/problems/distribute-coins-in-binary-tree/

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
    int fun(TreeNode* root, int &c)
    {
        if(!root)
            return 0;
        if(root->left)
        {
            int l=fun(root->left,c);
            c+=abs(1-l);
            root->val+=(l-1);
        }
        if(root->right)
        {
            int r=fun(root->right,c);
            c+=abs(1-r);
            root->val+=(r-1);
        }
        return root->val;
    }
    
    int distributeCoins(TreeNode* root) {
        int c=0;
        fun(root,c);
        return c;
    }
};
