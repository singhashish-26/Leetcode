#https://leetcode.com/problems/minimum-absolute-difference-in-bst/

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
    void inorder(TreeNode* curr, TreeNode*& prev, int &ans)
    {
        if(!curr)
            return;
        inorder(curr->left, prev, ans);
        
        if(prev!=NULL)
            ans = min(ans, abs(curr->val - prev->val));
        prev=curr;
        inorder(curr->right, prev, ans);
    }
    
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev= NULL;
        int ans=INT_MAX;
        inorder(root, prev, ans);
        return ans;
    }
};
