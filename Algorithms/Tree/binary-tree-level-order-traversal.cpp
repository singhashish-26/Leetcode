#https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    vector<vector<int>> ans;
    
    void preorder(TreeNode* root, int d)
    {
        if(!root)
            return;
        if(ans.size()==d)
            ans.push_back(vector<int>());
        ans[d].push_back(root->val);
        preorder(root->left, d+1);
        preorder(root->right, d+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        preorder(root, 0);
        return ans;
    }
};
