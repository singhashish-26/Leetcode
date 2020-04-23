#https://leetcode.com/problems/leaf-similar-trees/

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
    stack<int>s;
    int f=0;
    void findLeaves(TreeNode* root)
    {
        if(!root)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            s.push(root->val);
            return;
        }
        findLeaves(root->left);
        findLeaves(root->right);
    }
    
    void check(TreeNode* root)
    {
        if(!root)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            if(s.top()!=root->val)
                f=1;
            else
                s.pop();
            return;
        }
        check(root->right);
        check(root->left);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        findLeaves(root1);
        if(s.size()==0 && root2==NULL)
            return true;
        check(root2);
        if(f==1 || !s.empty())
            return false;
        else
            return true;
        
    }
};
