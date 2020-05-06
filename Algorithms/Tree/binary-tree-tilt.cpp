#https://leetcode.com/problems/binary-tree-tilt/

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
    int fun(TreeNode* root, int& tilt)
    {
        if(!root)
            return 0;
        int ls=0, rs=0;
        ls+=fun(root->left, tilt);
        if(root->left)
            ls+=root->left->val;
        rs+=fun(root->right, tilt);
        if(root->right)
            rs+=root->right->val;
        tilt+=abs(ls-rs);
        return (ls+rs);
    }
    
    int findTilt(TreeNode* root) {
        if(!root)
            return 0;
        int tilt=0;
        fun(root, tilt);
        return tilt;
    }
};
