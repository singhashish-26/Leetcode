#https://leetcode.com/problems/path-sum-iii/

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
    void fun(TreeNode* root, int k, int sum, int &c, unordered_map<int,int> m)
    {
        if(!root)
            return;
        sum+=root->val;
        if(m.find(sum-k)!=m.end())
        {
            c+=m[sum-k];
        }
        if(m.find(sum)!=m.end())
            m[sum]++;
        else
            m.insert({sum,1});
        fun(root->left,k,sum,c,m);
        fun(root->right,k,sum,c,m);
    }
    
    int pathSum(TreeNode* root, int sum) {
        int c=0;
        unordered_map<int,int> m;
        m.insert({0,1});
        fun(root,sum,0,c,m);
        return c;
    }
};
