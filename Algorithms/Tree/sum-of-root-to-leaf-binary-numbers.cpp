#https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

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
    int x=0,sum=0;
    vector<TreeNode*> v;
    //stack<TreeNode*> s;
    
    void fun(TreeNode* root)
    {
        if(root==NULL)
            return;
        v.push_back(root);
        if(root->left!=NULL)
            fun(root->left);
        if(root->right!=NULL)
            fun(root->right);
        if(root->left!=NULL || root->right!=NULL)
        {
            v.pop_back();
            return;
        }
        int j=0;
        for(int i=v.size()-1; i>=0; i--)
        {
            x+=(v[i]->val*pow(2,j));
            j++;
        }
        sum+=x;
        x=0;
        v.pop_back();
    }
    
    int sumRootToLeaf(TreeNode* root) {
        fun(root);
        return sum;
        
    }
};
