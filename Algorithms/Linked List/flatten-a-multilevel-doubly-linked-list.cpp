#https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* fun(Node* temp)
    {
        if(temp==NULL)
            return temp;
        while(temp->next!=NULL && temp->child==NULL)
        {
            temp=temp->next;
        }
        Node* x= temp->next;
        //Node* pre= temp;
        if(temp->next==NULL && temp->child==NULL)
        {
            return temp;
        }
        temp->child->prev=temp;
        temp->next=temp->child;
        temp->child=NULL;
        Node* y = fun(temp->next);
        if(y!=NULL)
            y->next=x;
        if(x!=NULL)
            x->prev=y;
        temp=x;
        return fun(temp);
    }
    
    Node* flatten(Node* head) {
        Node* temp = head;
        temp = fun(temp);
        temp= head;
        return temp;
    }
};
