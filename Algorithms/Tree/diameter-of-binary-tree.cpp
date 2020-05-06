#https://leetcode.com/problems/diameter-of-binary-tree/

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
    
    int find(TreeNode* root, int& ans)
    {
        if(!root)
            return 0;
        int lh= find(root->left, ans);
        int rh= find(root->right, ans);
        ans = max(ans, 1+lh+rh);
        return 1+max(lh,rh);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans= INT_MIN;
        if(!root)
            return 0;
        find(root, ans);
        return --ans;
    }
};
