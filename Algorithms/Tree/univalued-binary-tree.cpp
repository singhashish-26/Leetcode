#https://leetcode.com/problems/univalued-binary-tree/

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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        int x = root->val;
        stack<TreeNode*> s;
        s.push(root->right);
        s.push(root->left);
        while(!s.empty())
        {
            TreeNode* temp=s.top();
            if(temp!=NULL && temp->val != x)
                break;
            s.pop();
            if(temp!=NULL){
            s.push(temp->right);
            s.push(temp->left);
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};
