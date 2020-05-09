#https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#iterative approach
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = NULL;
        queue<TreeNode*> o,c;
        o.push(original);
        c.push(cloned);
        while(!o.empty())
        {
            if(o.front()==target)
            {
                ans = c.front();
                break;
            }
            else
            {
                if(o.front()->left){
                    o.push(o.front()->left);
                    c.push(c.front()->left);
                }
                if(o.front()->right)
                {
                    o.push(o.front()->right);
                    c.push(c.front()->right);
                }
                o.pop();
                c.pop();
            }
        }
        return ans;
    }
};

#recursive approach
class Solution {
public:
    void find(TreeNode* o, TreeNode* c, TreeNode* t, TreeNode* &ans)
    {
        if(!o)
            return;
        if(o==t)
        {
            ans=c;
            return;
        }
        find(o->left,c->left,t,ans);
        if(!ans)
            find(o->right,c->right,t,ans);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = NULL;
        find(original,cloned,target,ans);
        return ans;
    }
};
