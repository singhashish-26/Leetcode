#https://leetcode.com/problems/symmetric-tree/

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
    
    void fun(TreeNode* p, TreeNode* q)
    {
        if(!p && !q)
            return;
        if((!p && q) || (p && !q) || (p->val!=q->val))
        {
            f=1;
            return;
        }
        fun(p->left, q->right);
        fun(p->right, q->left);
        
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return 1;
        fun(root->left, root->right);
        if(f==1)
            return 0;
        return 1;
    }
};
