#https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/

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
    void findSum(TreeNode* parent, int &sum)
    {
        if(parent->left)
            sum+=parent->left->val;
        if(parent->right)
            sum+=parent->right->val;
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            if(q.front()->val%2==0)
            {
                if(q.front()->left)
                    findSum(q.front()->left,sum);
                if(q.front()->right)
                    findSum(q.front()->right,sum);
            }
            if(q.front()->left)
                q.push(q.front()->left);
            if(q.front()->right)
                q.push(q.front()->right);
            q.pop();
        }
        return sum;
    }
};
