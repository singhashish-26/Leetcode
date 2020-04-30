#https://leetcode.com/problems/cousins-in-binary-tree/

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
    
    int fun(TreeNode* root, TreeNode*& prev, int x, int l)
    {
        if(!root)
            return 0;
        if(root->val == x)
        {
            return l;
        }
        prev= root;
        int d= fun(root->left, prev, x, l+1);
        if(d!=0)
        {
            return d;
        }
        prev=root;
        d= fun(root->right, prev, x, l+1);
        return d;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* p1=NULL;
        TreeNode* p2=NULL;
        int d1= fun(root, p1, x, 0);
        int d2= fun(root, p2, y, 0);
        if(d1==d2 && p1!=p2)
            return true;
        return false;
    }
};
