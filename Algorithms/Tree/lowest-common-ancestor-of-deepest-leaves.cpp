#https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/

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
    unordered_map<TreeNode*, int> m;
    TreeNode* fun(TreeNode* root,int &mx, int d=0)
    {
        if(!root)
            return NULL;
        TreeNode* l = fun(root->left,mx,d+1);
        TreeNode* r = fun(root->right,mx,d+1);
        if(!l && !r)
        {
            mx= max(mx,d);
            if(d==mx)
            {
                m.insert({root,d});
                return root;
            }
            else
                return NULL;
        }
        if(l && r)
        {
            if(m[l]==m[r])
            {
                m.insert({root,m[l]});
                return root;
            }
            if(m[l]>m[r])
                return l;
            else
                return r;
        }
        if(!l)
            return r;
        else
            return l;
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int mx=0;
        return fun(root,mx,0);
    }
};
