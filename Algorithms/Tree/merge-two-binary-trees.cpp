#https://leetcode.com/problems/merge-two-binary-trees/

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
    TreeNode* newNode(int x)
    {
        TreeNode* temp = new TreeNode();
        temp->val=x;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
    
    TreeNode* merge(TreeNode* t1, TreeNode* t2)
    {
        int x = t1->val + t2->val;
        TreeNode* temp = newNode(x);
        if(t1->left!=NULL && t2->left!=NULL)
            temp->left= merge(t1->left, t2->left);
        if(t1->left==NULL && t2->left!=NULL)
            temp->left=t2->left;
        if(t1->left!=NULL && t2->left==NULL)
            temp->left=t1->left;
        if(t1->right!=NULL && t2->right!=NULL)
            temp->right= merge(t1->right, t2->right);
        if(t1->right==NULL && t2->right!=NULL)
            temp->right=t2->right;
        if(t1->right!=NULL && t2->right==NULL)
            temp->right=t1->right;
        return temp;
    }
    
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL)
            return t2;
        if(t2==NULL)
            return t1;
        return merge(t1,t2);
        
    }
};
