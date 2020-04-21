#https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3305/

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
    TreeNode* newnode(int x)
    {
        TreeNode* temp = new TreeNode();
        temp->val = x;
        temp->left= NULL;
        temp->right= NULL;
        return temp;
    }
    
    TreeNode* constTree2(vector<int>& preorder, int* ind, int key, int mn, int mx, int size)
    {
        if(*ind>=size)
        {
            return NULL;
        }
        TreeNode* temp= NULL;
        if(key > mn && key <mx)
        {
            temp = newnode(key);
            *ind= *ind+1;
            if(*ind < size)
            {
                temp->left = constTree2(preorder, ind, preorder[*ind], mn, key, size);
                if(*ind < size)
                    temp->right = constTree2(preorder, ind, preorder[*ind], key, mx, size);
                else
                    temp->right = NULL;
            }
        }
        return temp;
    }
    
    TreeNode* constTree(vector<int>& preorder, int size)
    {
        int ind = 0;
        return constTree2(preorder, &ind, preorder[0], INT_MIN, INT_MAX, size);
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int size= preorder.size();
        if(size==0)
        {
            return NULL;
        }
        return constTree(preorder, size);
    }
};
