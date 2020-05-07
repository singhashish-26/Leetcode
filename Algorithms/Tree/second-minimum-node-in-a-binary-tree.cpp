#https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/

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
    unsigned int minn(unsigned int x, int y)
    {
        return (x<y) ?x : y;
    }
    
    void fun(TreeNode* root, unsigned int &mn)
    {
        if(!root || !root->left)
            return;
        if(root->left->val!=root->val || root->right->val!=root->val)
        {
            mn = minn(mn, max(root->left->val, root->right->val));
        }
        fun(root->left, mn);
        fun(root->right, mn);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        if(!root || !root->left)
            return -1;
        unsigned int mn=UINT_MAX;
        fun(root, mn);
        if(mn==UINT_MAX)
            return -1;
        return mn;
    }
};
