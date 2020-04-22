https://leetcode.com/problems/maximum-depth-of-n-ary-tree/

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
    int depth=0,mx=0;
    
    void fun(Node* root)
    {
        if(root==NULL)
            return;
        int i=0;
        depth++;
        int prev=depth;
        while(i<root->children.size())
        {
            fun(root->children[i]);
            mx = max(mx, depth);
            depth=prev;
            i++;
        }
        mx= max(mx,depth);
    }
    
    int maxDepth(Node* root) {
        fun(root);
        return mx;
    }
};
