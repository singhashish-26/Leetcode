#https://leetcode.com/problems/construct-string-from-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    string s="";
    void fun(TreeNode* root)
    {
        if(root==NULL)
            return;
        s+=to_string(root->val);
        if(root->left!=NULL)
        {
            s+='(';
            fun(root->left);
            s+=')';
        }
        if(root->left==NULL && root->right!=NULL)
        {
            s+="()";
        }
        if(root->right!=NULL)
        {
            s+='(';
            fun(root->right);
            s+=')';
        }
    }
    
    string tree2str(TreeNode* t){
        fun(t);
        return s;
    }
};
