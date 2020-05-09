#https://leetcode.com/problems/maximum-binary-tree/

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
    TreeNode* construct(vector<int>& nums, int cl, int cr)
    {
        if(cr<cl)
            return NULL;
        int mx=nums[cl],pos=cl;
        for(int i=cl+1; i<=cr; i++)
        {
            if(nums[i]>mx)
            {
                mx=nums[i];
                pos=i;
            }
        }
        TreeNode* curr = new TreeNode(mx);
        curr->left= construct(nums, cl, pos-1);
        curr->right= construct(nums,pos+1,cr);
        return curr;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int mx=nums[0], pos=0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>mx)
            {
                mx=nums[i];
                pos=i;
            }
        }
        TreeNode* root = new TreeNode(mx);
        root->left= construct(nums,0,pos-1);
        root->right= construct(nums,pos+1,nums.size()-1);
        return root;
    }
};
