#https://leetcode.com/problems/delete-nodes-and-return-forest/

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
    void mark(TreeNode* root, map<TreeNode*, int>&m, set<int>&s)
    {
        if(!root)
            return;
        m.insert({root,1});
        if(s.count(root->val)>0)
        {
            root->val=0;
            m[root]=0;
        }
        mark(root->left,m,s);
        mark(root->right,m,s);
    }
    
    TreeNode* fun(TreeNode* root, map<TreeNode*, int> &m)
    {
        if(!root)
            return NULL;
        if(root->val==0)
            return NULL;
        m[root]=0;
        root->left= fun(root->left,m);
        root->right= fun(root->right,m);
        return root;
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        if(to_delete.size()==0)
            return {{root}};
        map<TreeNode*, int> m;
        set<int> s;
        for(int i=0; i<to_delete.size(); i++)
        {
            s.insert(to_delete[i]);
        }
        vector<TreeNode*> ans;
        mark(root,m,s);
        for(auto x : m)
        {
            if(x.second==1)
            {
                ans.push_back(fun(x.first,m));
            }
        }
        m.clear();
        s.clear();
        return ans;
    }
};
