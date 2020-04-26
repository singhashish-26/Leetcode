#https://leetcode.com/problems/average-of-levels-in-binary-tree/

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
    vector<double> v;
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q,t;
        q.push(root);
        double sum,c;
        while(!q.empty())
        {
            sum=0;
            c=0;
            while(!q.empty())
            {
                sum+=q.front()->val;
                c++;
                if(q.front()->left)
                    t.push(q.front()->left);
                if(q.front()->right)
                    t.push(q.front()->right);
                q.pop();
            }
            v.push_back(sum/c);
            while(!t.empty())
            {
                q.push(t.front());
                t.pop();
            }
        }
        return v;
        
        
    }
};
