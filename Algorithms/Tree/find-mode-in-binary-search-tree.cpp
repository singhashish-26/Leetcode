#https://leetcode.com/problems/find-mode-in-binary-search-tree/

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
    void fun(TreeNode* root, unordered_map<int,int>&m , int &h)
    {
        if(!root)
            return;
        m[root->val]++;
        if(m[root->val]>h)
            h=m[root->val];
        fun(root->left,m,h);
        fun(root->right,m,h);
    }
    
    vector<int> findMode(TreeNode* root) {
        if(!root)
            return {};
        int hfreq = 1;
        unordered_map<int,int> m;
        fun(root, m, hfreq);
        vector<int> v;
        for(auto x:m)
        {
            if(x.second==hfreq)
                v.push_back(x.first);
        }
        return v;
    }
};
