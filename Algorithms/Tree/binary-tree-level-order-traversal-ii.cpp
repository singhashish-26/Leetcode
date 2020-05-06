#https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

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
    int depth(TreeNode* root)
    {
        if(!root)
            return 0;
        return max(depth(root->left), depth(root->right))+1;
    }
    
    void levelPrint(vector<vector<int>> &ans, TreeNode* root, int level)
    {
        if(!root)
            return;
        ans[level].push_back(root->val);
        levelPrint(ans, root->left, level-1);
        levelPrint(ans, root->right, level-1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d = depth(root);
        vector<vector<int>> ans(d,vector<int> {});
        int level = d-1;
        //cout<<d;
        levelPrint(ans, root, level);
        return ans;
    }
};
