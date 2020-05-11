#https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/

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
class FindElements {
public:
    set<int>s;
    FindElements(TreeNode* root) {
        root->val=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            if(q.front()->left){
                q.front()->left->val= 2*q.front()->val +1;
                q.push(q.front()->left);
                s.insert(2*q.front()->val +1);
            }
            if(q.front()->right){
                q.front()->right->val= 2*q.front()->val +2;
                q.push(q.front()->right);
                s.insert(2*q.front()->val +2);
            }
            q.pop();
        }
    }
    
    bool find(int target) {
        return s.find(target)!=s.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
