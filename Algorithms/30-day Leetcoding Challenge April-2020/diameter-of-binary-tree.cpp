#https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3293/

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
    int findHeight(TreeNode* root, int &ans)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh = findHeight(root->left, ans);
        int rh = findHeight(root->right, ans);
        ans = max(ans, 1+lh+rh);
        return 1+max(lh,rh);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int ans = INT_MIN;
        int h = findHeight(root,ans);
        return --ans;
    }
};
