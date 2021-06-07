// --------------------ALGORITHM ONLY--------------------

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
Node *head=new Node;
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node)
    {
        int left=0,right=0;
         if(node->left!=NULL)
             left=height(node->left);
         if(node->right!=NULL)
             right=height(node->right);
         if(left>right)
            return left+1;
         else
            return right+1;
    }
};

