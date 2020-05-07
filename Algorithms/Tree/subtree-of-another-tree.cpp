#https://leetcode.com/problems/subtree-of-another-tree/

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
    bool fun2(TreeNode* s, TreeNode* t)
    {
        if(!s && !t)
            return 1;
        if(!s || !t)
            return 0;
        return s->val==t->val && fun2(s->left, t->left) && fun2(s->right, t->right);
    }
    
    bool fun1(TreeNode* s, TreeNode* t)
    {
        return s!=NULL && ( fun2(s,t) || fun1(s->left,t) || fun1(s->right,t));
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return fun1(s,t);
        
    }
};
