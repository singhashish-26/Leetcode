#https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/

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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n= pre.size();
        if(n==0)
            return NULL;
        TreeNode *root = new TreeNode(pre[0]);
        if(n==1)
            return root;
        int l=0;
        for(int i=0; i<n; i++)
        {
            if(post[i]==pre[1]){
                l=i+1;
                break;
            }
        }
        vector<int> pr(pre.begin()+1,pre.begin()+l+1);
        vector<int> po(post.begin(),post.begin()+l);
        root->left= constructFromPrePost(pr,po);
        vector<int> pr1(pre.begin()+l+1,pre.end());
        vector<int> po2(post.begin()+l,post.end()-1);
        root->right= constructFromPrePost(pr1,po2);
        return root;
    }
};
