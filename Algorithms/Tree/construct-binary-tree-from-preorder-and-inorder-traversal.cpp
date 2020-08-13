#https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

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
    unordered_map<int,int> m;
    int pos=0;
    
    TreeNode* fun1(vector<int>& preorder, vector<int>& inorder, int lo, int hi)
    {
        if(lo>hi)
            return NULL;
        pos++;
        int x= m[preorder[pos]];
        if(lo==hi)
        {
            return new TreeNode(inorder[x]);
        }
        TreeNode* curr= new TreeNode(inorder[x]);
        curr->left = fun1(preorder, inorder, lo,x-1);
        curr->right= fun1(preorder, inorder, x+1, hi);
        return curr;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.size()==0)
        {
            return NULL;
        }
        for(int i=0; i<inorder.size(); i++)
        {
            m[inorder[i]]=i;
        }
        TreeNode* root = new TreeNode(preorder[0]);
        root->left= fun1(preorder,inorder, 0, m[preorder[0]]-1);
        root->right= fun1(preorder, inorder, m[preorder[0]]+1, inorder.size()-1);
        return root;
    }
};
