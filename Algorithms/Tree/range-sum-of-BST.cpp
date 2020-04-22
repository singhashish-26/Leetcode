#https://leetcode.com/problems/range-sum-of-bst/

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
    int sum=0; 
    void findSum(TreeNode* root, int l, int r)
    {
        if(root==NULL)
            return;
        if(root->val>=l && root->val<=r)
            sum+=root->val;
        if(root->left!=NULL)
        {
            findSum(root->left, l, r);
        }
        if(root->right!=NULL)
        {
            findSum(root->right, l, r);
        }
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        TreeNode* temp =root;
        findSum(temp,L,R);
        return sum;
    }
};
