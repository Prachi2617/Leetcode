// --------------------ALGORITHM ONLY--------------------
// 1st approach doesn't work in leetcode so 2nd is the best approach , use that always



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
    //---------------1st way-------------------------
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

    //-------------2nd Way--------------------
    int height(Node* root)
    {
        if(root==NULL)
            return 0;
        else
        {
            int l=height(root->left);
            int r=height(root->right);
            if(l>r)
                return l+1;
            else
                return r+1;
        }
    }
};

