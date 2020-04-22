#https://leetcode.com/problems/n-ary-tree-postorder-traversal/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void fun(Node* root)
    {
        if(root==NULL)
            return;
        int i=0;
        while(i<root->children.size())
        {
            fun(root->children[i]);
            i++;
            //ans.push_back(root->val);       
        }
        ans.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {
        fun(root);
        if(ans.size())
            return ans;
        else
            return {};
    }
};
