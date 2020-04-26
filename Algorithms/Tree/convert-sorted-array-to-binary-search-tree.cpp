#https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
    TreeNode* createBST(vector<int>& nums, int i, int j)
    {
        if(i>j)
        {
            return NULL;
        }
        int mid=(i+j)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left= createBST(nums,i,mid-1);
        root->right= createBST(nums,mid+1,j);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return createBST(nums,0,n-1);
    }
};
